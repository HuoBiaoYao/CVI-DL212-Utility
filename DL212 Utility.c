#include "user.h"
//#include "menuutil.h"

char TxBuf[1024],RxBuf[1024];
char PathFileName[MAX_PATHNAME_LEN];
int File_Handle;   
unsigned char QuitCtrl=1,SDI12CMD_Error[2];	
unsigned char debug_mode=VALUE_DISPLAY_ON;    
int panelHandle;
int TabPanel_0_Handle,TabPanel_1_Handle,TabPanel_2_Handle; 
   
int main (int argc, char *argv[]){
	int len=0; 
	char dirname[MAX_PATHNAME_LEN]; 
	
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle = LoadPanel (0, "DL212 Utility.uir", PANEL)) < 0)
		return -1; 
                     
	GetPanelHandleFromTabPage (panelHandle, PANEL_TAB, 0, &TabPanel_0_Handle); 
	GetPanelHandleFromTabPage (panelHandle, PANEL_TAB, 1, &TabPanel_1_Handle);  
	GetPanelHandleFromTabPage (panelHandle, PANEL_TAB, 2, &TabPanel_2_Handle);  
    DisplayPanel (panelHandle);
	/*GetProjectDir (dirname);
	sprintf (File_Name, "%s\\CONFIG.DL212", dirname);
	File_Handle = OpenFile (File_Name, VAL_READ_WRITE, VAL_OPEN_AS_IS, VAL_ASCII);   
    ReadFile (File_Handle, &sDL212_Config, sizeof(sDL212_CONFIG);
	CloseFile(File_Handle);*/
	//SetCtrlAttribute(panelHandle,TABPANEL_0_TEXTBOX_R,ATTR_WRAP_MODE,VAL_CHAR_WRAP);    			 			  
	COM_Enumerate();
  	GetCtrlVal (panelHandle, PANEL_RING_COM,&sCOM.number);  
	GetPanelValues();  	
	SetCtrlAttribute(TabPanel_0_Handle,TABPANEL_0_TEXTBOX_R,ATTR_WRAP_MODE,VAL_CHAR_WRAP);  
	SetSleepPolicy (VAL_SLEEP_SOME);  
    //RunUserInterface ();
	while(QuitCtrl){
	    ProcessSystemEvents();
		//if(VALUE_DISPLAY_ON == debug_mode){   
			if(OPEN == sCOM.status){   
			    len = GetInQLen(sCOM.number);
		        if(len){
					len = 0;
					ComRdTerm (sCOM.number, RxBuf, 512,0x0A);
	          	    SetCtrlVal(TabPanel_0_Handle, TABPANEL_0_TEXTBOX_R,RxBuf);   
					memset(RxBuf,0,512);
		   		}  
			}
	    //}
	}
    DiscardPanel (panelHandle);
    CloseCVIRTE ();
	return 0;
}
   
int CVICALLBACK ComSelect(int panel, int control, int event,void *callbackData, int eventData1, int eventData2){
	switch (event){
		case EVENT_LEFT_CLICK:
			GetCtrlVal (panelHandle, PANEL_RING_COM,&sCOM.number);
			COM_Enumerate();    
	   		SetCtrlVal (panelHandle, PANEL_RING_COM,sCOM.number);         
			break;
		case EVENT_COMMIT:
			GetCtrlVal (panelHandle, PANEL_RING_COM, &sCOM.number);  
			break;
		case EVENT_VAL_CHANGED:
			if(OPEN == sCOM.status){
	  			ComWrt (sCOM.number, "value display off", 18);
				CloseCom (sCOM.number);
				sCOM.status = CLOSE;
			}    
			SetCtrlVal (panelHandle, PANEL_TB_COM_CTRL,sCOM.status);
			GetCtrlVal (panelHandle, PANEL_RING_COM, &sCOM.number);   
		break;
		default:
		break;
	}
	return 0;
}

int  CVICALLBACK ComCtrl(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
	int res;
	
	switch (event){
		case EVENT_COMMIT:  
			GetCtrlVal (panelHandle, PANEL_TB_COM_CTRL, &sCOM.status); 
	        if(CLOSE == sCOM.status){
				SetCtrlAttribute(panelHandle,PANEL_RING_COM ,ATTR_DIMMED,0);
				SetCtrlAttribute(TabPanel_0_Handle,TABPANEL_0_RING_DEBUG_MODE ,ATTR_DIMMED,1); 
				CloseCom (sCOM.number); 
			}
			else{	
				SetCtrlAttribute(panelHandle,PANEL_RING_COM ,ATTR_DIMMED,1); 
				SetCtrlAttribute(TabPanel_0_Handle,TABPANEL_0_RING_DEBUG_MODE ,ATTR_DIMMED,0);    
				res = OpenComConfig (sCOM.number, "", 115200, 0, 8, 1, 1024, 1024); 
				FlushInQ (sCOM.number);
				if(res < 0){
					SetCtrlVal (panelHandle, PANEL_TB_COM_CTRL, 0);
				    MessagePopup ("","     串口打开失败,请检查该串口是否已经被其他程序打开     ");         
				}
				else{
					SetComTime(sCOM.number,1);
					FlushOutQ (sCOM.number);     
				}	  
			}  
			break;
	}
	return 0;
}
 
int  CVICALLBACK MainPanel(int panel, int event, void *callbackData, int eventData1, int eventData2){
	switch (event){
		case EVENT_GOT_FOCUS:
			break;
		case EVENT_LOST_FOCUS:
			break;
		case EVENT_CLOSE: 
			QuitCtrl = 0;  
			QuitUserInterface(0);
			break;
	}
	return 0;
}
 

int  CVICALLBACK RingsConfig(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
	switch (event){    
		case EVENT_VAL_CHANGED: 
		case EVENT_COMMIT:
		case EVENT_LEFT_CLICK:
			GetDL212Rings();  
		break;
	    default:
		break;
	}
	return 0;
}
 
int  CVICALLBACK Sdi12CmdSet(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
	int len=0,i;
	
	if(control == TABPANEL_2_TEXTBOX_SDI12CMD_D1){
		i = 0;
	}
	else{
		i = 1;
	}
	switch (event){
		case EVENT_COMMIT:
		case EVENT_LEFT_CLICK:
		case EVENT_VAL_CHANGED:
		case EVENT_KEYPRESS:
			GetCtrlAttribute (TabPanel_2_Handle, control, ATTR_STRING_TEXT_LENGTH, &len);
			if(len > 1){
				memset(&sDL212_CONFIG.sdi12_cmd[i][0],0,200);
				GetCtrlVal(TabPanel_2_Handle,control,&sDL212_CONFIG.sdi12_cmd[i][0]);
			    SDI12CMD_Check(0,&sDL212_CONFIG.sdi12_cmd[i][0],len);
 			}
		break;
	}
	return 0;
}
 
void CVICALLBACK SendConfig(int menubar, int menuItem, void *callbackData, int panel){
	int i=0,j=0,len;
	char buf[66];
    char *p;
	
	GetCtrlVal (panelHandle, PANEL_TB_COM_CTRL, &sCOM.status); 
	if(CLOSE == sCOM.status){
		MessagePopup (" 发送配置               ","                请先打开串口                ");     
	}
	else{
		FlushOutQ (sCOM.number);    
		GetPanelValues();
		strcpy(buf,"DL212 Configuration Utility Write"); 
		len = ComWrt (sCOM.number,buf,34);	   
		SyncWait (Timer(),0.1);
		p = (char *)&sDL212_CONFIG;
		i = sizeof(sDL212_CONFIG)/60+1;
		sDL212_CONFIG.lrc = 0;
		sDL212_CONFIG.lrc = LRC((unsigned char *)p,sizeof(sDL212_CONFIG)-4); 
		for(j=0;j<i-1;j++){
			len = ComWrt (sCOM.number,(const char*)(p+j*60),60); 
			SyncWait (Timer(),0.02);
		}
		memset(RxBuf,0,10);
		len = ComWrt (sCOM.number,(const char*)(p+j*60),sizeof(sDL212_CONFIG)-j*60); 
		FlushInQ (sCOM.number);   
 	    SyncWait (Timer(),0.02);
		len = ComRdTerm (sCOM.number, RxBuf, 10,0x0A);   
		if(len == -99){
			MessagePopup (" 发送配置               ","              未响应               ");    
			return ;
		}
	    if(0 == strncmp("lrc ok",RxBuf,6)){
	   		MessagePopup (" 发送配置               ","               发送完成               ");
	        return ;
        } 
		else if(0 == strncmp("lrc error",RxBuf,9)){
			MessagePopup (" 发送配置               ","               通讯校验错误               ");
		}
		MessagePopup (" 发送配置               ","               未响应               ");
	}
}

void CVICALLBACK ReadConfig(int menubar, int menuItem, void *callbackData, int panel){
	int i=0,len=0;
	unsigned char lrc=0;
	char byte,buf[33],*p;  
	struct _DL212_CONFIG config;   
	
	GetCtrlVal (panelHandle, PANEL_TB_COM_CTRL, &sCOM.status); 
	if(CLOSE == sCOM.status){
		MessagePopup (" 发送配置               ","                请先打开串口                ");     
	}
	else{
		p = &config;
		FlushOutQ (sCOM.number);  
		FlushInQ (sCOM.number);  
		strcpy(buf,"DL212 Configuration Utility Read");
		len = ComWrt (sCOM.number,buf,33);
		while(i < sizeof(config)){
			byte = ComRdByte (sCOM.number);   
			if(byte == -99){
				MessagePopup (" 读取配置               ","              未响应               ");    
				return;
			}
			else{
				memcpy(p+i,&byte,1); 
			}
			i++;
		}
		lrc = LRC((unsigned char *)&config,sizeof(config)-4);
		if(lrc == config.lrc){
			ResetTextBox (TabPanel_2_Handle, TABPANEL_2_TEXTBOX_SDI12CMD_D1, 0);
			ResetTextBox (TabPanel_2_Handle, TABPANEL_2_TEXTBOX_SDI12CMD_D2, 0); 
			SetPanelValuesFromFile(&config);     
			memcpy((void*)&sDL212_CONFIG,(void*)&config,sizeof(sDL212_CONFIG));
			ATTRDimmed_Ctrl(); 
	 		MessagePopup (" 读取配置               ","              读取参数完成               "); 
		}
		else{
			 MessagePopup (" 读取配置               ","              读取参数校验错误               ");
		}
	}
}

int  CVICALLBACK DebugMode(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
	int len,i;
	char buf[35];
	
	switch (event){
		case EVENT_COMMIT:
			if(CLOSE == sCOM.status){
	    	    MessagePopup (" 调试模式           ","                请先打开串口                ");  
				return 0;
        	}
			FlushOutQ (sCOM.number);  
			FlushInQ (sCOM.number);  
			GetCtrlVal(TabPanel_0_Handle,TABPANEL_0_RING_DEBUG_MODE,&debug_mode);  
		for(i=0;i<10;i++){	
			switch(debug_mode){
			    case VALUE_DISPLAY_ON:
				  	strcpy(buf,"DL212 value display on");
					len = ComWrt (sCOM.number,buf,23); 
			    break;
				case VALUE_DISPLAY_OFF:
				    strcpy(buf,"DL212 value display off");
					len = ComWrt (sCOM.number,buf,24);
			    break;
				case SDI12_0_TRANSPARENT:
				    strcpy(buf,"DL212 c1 port sdi12 transparent");
					len = ComWrt (sCOM.number,buf,33);
			    break;
				case SDI12_1_TRANSPARENT:
				    strcpy(buf,"DL212 c2 port sdi12 transparent");
					len = ComWrt (sCOM.number,buf,33);
			    break;
				default:
				break;
			}
			SyncWait (Timer(),0.02);
		}
		break;
	}
	return 0;
}
   
static const char *DaysOfWeek[] = { "星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六" };
int  CVICALLBACK Clock(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
	unsigned int year, month, day, hour, min, sec, weekDay;
	char buffer[512];
	CVIAbsoluteTime absTime;
	
	switch (event){
		case EVENT_TIMER_TICK:
			GetCurrentCVIAbsoluteTime(&absTime);
			CVIAbsoluteTimeToLocalCalendar(absTime, &year, &month, &day, &hour, &min, &sec, 0, &weekDay);			    
			sprintf(buffer, "%04d/%02d/%02d/%s %02d:%02d:%02d", year,month,day,DaysOfWeek[weekDay],hour,min,sec);   
			SetCtrlVal(panel, PANEL_TEXTMSG_CLOCK_PC, buffer); 
			//GetCtrlVal(panelHandle,PANEL_RING_COM ,&sCOM.number);  
			break;
	}
	return 0;
}	


void CVICALLBACK FileOpen (int menuBar, int menuItem, void *callbackData,int panel){
    int  stat;	    		 
	struct _DL212_CONFIG config;
	unsigned char lrc;  
			 
    stat = FileSelectPopupEx ("", "*.DL212", "", "打开文件",VAL_LOAD_BUTTON, 0, 0, PathFileName);
    if((stat == VAL_EXISTING_FILE_SELECTED) || (stat == VAL_NEW_FILE_SELECTED)){
		File_Handle = OpenFile (PathFileName, VAL_READ_WRITE, VAL_OPEN_AS_IS, VAL_ASCII); 
		ReadFile (File_Handle, (char*)&config, sizeof(config));  
		lrc = LRC((unsigned char *)&config,sizeof(config)-4);
		if(lrc == config.lrc){ 
			ResetTextBox (TabPanel_2_Handle, TABPANEL_2_TEXTBOX_SDI12CMD_D1, 0);
			ResetTextBox (TabPanel_2_Handle, TABPANEL_2_TEXTBOX_SDI12CMD_D2, 0);
			SetPanelValuesFromFile(&config); 
			memcpy((void*)&sDL212_CONFIG,(void*)&config,sizeof(sDL212_CONFIG));
			ATTRDimmed_Ctrl();
		}
		else{
			 MessagePopup (" 读取配置               ","              文件校验错误               ");
		}
		CloseFile(File_Handle);	 
	}
}

void CVICALLBACK FileSave (int menuBar, int menuItem, void *callbackData,int panel){
	int  stat; 		 
	
	GetPanelValues();
	sDL212_CONFIG.lrc = LRC((unsigned char *)&sDL212_CONFIG,sizeof(sDL212_CONFIG)-4);
	File_Handle = OpenFile (PathFileName, VAL_READ_WRITE, VAL_OPEN_AS_IS, VAL_ASCII);
	if(-1 == File_Handle){
		stat = FileSelectPopupEx ("", "*.DL212", "", "DL212 Utility:",VAL_SAVE_BUTTON, 0, 0, PathFileName);
		if((stat == VAL_EXISTING_FILE_SELECTED) || (stat == VAL_NEW_FILE_SELECTED)){
			File_Handle = OpenFile (PathFileName, VAL_READ_WRITE, VAL_OPEN_AS_IS, VAL_ASCII);
			if(-1 == File_Handle){
				 MessagePopup (" 保存           ","                保存文件失败                ");   
			}
			else{
				WriteFile(File_Handle,(char*)&sDL212_CONFIG,sizeof(sDL212_CONFIG));
				CloseFile(File_Handle);
			}
			
		} 
	}
	else{
		WriteFile(File_Handle,(char*)&sDL212_CONFIG,sizeof(sDL212_CONFIG));
		CloseFile(File_Handle);
	}  
}

void CVICALLBACK FileSaveAs (int menuBar, int menuItem, void *callbackData,int panel){
    int  stat; 
    char pathname[MAX_PATHNAME_LEN];
    int file_Handle;
	
    stat = FileSelectPopupEx ("", "*.DL212", "", "DL212 Utility:",VAL_SAVE_BUTTON, 0, 0, pathname);
    if ((stat == VAL_EXISTING_FILE_SELECTED) || (stat == VAL_NEW_FILE_SELECTED)){
		file_Handle = OpenFile (pathname, VAL_READ_WRITE, VAL_OPEN_AS_IS, VAL_ASCII);
		if(-1 == file_Handle){
	    	MessagePopup (" 保存               ","               另存为文件失败               ");    
		}
		else{
			GetPanelValues();
			sDL212_CONFIG.lrc = LRC((unsigned char *)&sDL212_CONFIG,sizeof(sDL212_CONFIG)-4); 
			WriteFile(file_Handle,(const char *)&sDL212_CONFIG,sizeof(sDL212_CONFIG));
			CloseFile(file_Handle);  
		}
	} 
}

int  CVICALLBACK DebugTx(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
	char buf[10];
	int len;
	
	switch (event){		    
		case EVENT_LEFT_CLICK:
			GetCtrlAttribute (TabPanel_0_Handle, TABPANEL_0_TEXTBOX_T, ATTR_STRING_TEXT_LENGTH, &len);
			if(len > 1 ){ 
				GetCtrlVal(TabPanel_0_Handle,TABPANEL_0_TEXTBOX_T,buf);	
				if(isalnum(*buf) || '?' == *buf){
			        if('!' == *(buf+len-1)){ 
						ComWrt (sCOM.number,buf,len);	
				  	} 
				  	else{
				  		MessagePopup (" SDI-12透传模式               ","                SDI-12命令格式错误	               ");
				    }
			    } 
				else{
					MessagePopup (" SDI-12透传模式               ","                SDI-12命令格式错误               ");        
				}
 			}  
		break;
	}
	return 0;
}
  
int  CVICALLBACK RxTextBox(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
    int menuHandle;
	switch (event) {
		case EVENT_RIGHT_CLICK:
		    menuHandle = LoadMenuBar(0,"DL212 Utility.uir", MENUBAR);
            RunPopupMenu (menuHandle, MENUBAR_MENU1, panel, eventData1,eventData2,1,1,1,1);
        break; 
	}
	return 0;  
}

void CVICALLBACK ClearBox(int menubar, int menuItem, void *callbackData, int panel)
{
    ResetTextBox (TabPanel_0_Handle, TABPANEL_0_TEXTBOX_R, 0);     
}  
 
