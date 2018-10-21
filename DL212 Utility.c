#include "user.h"


char TxBuf[1024],RxBuf[1024];
char File_Name[MAX_PATHNAME_LEN];
unsigned char QuitCtrl=1;	  	   
int panelHandle,TabPanel_0_Handle,TabPanel_1_Handle,TabPanel_2_Handle;
int File_Handle;

int main (int argc, char *argv[]){
	int len;
	char dirname[MAX_PATHNAME_LEN];
	
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle = LoadPanel (0, "DL212 Utility.uir", PANEL)) < 0)
		return -1; 
	GetPanelHandleFromTabPage (panelHandle, PANEL_TAB, 0, &TabPanel_0_Handle); 
	GetPanelHandleFromTabPage (panelHandle, PANEL_TAB, 1, &TabPanel_1_Handle);  
	GetPanelHandleFromTabPage (panelHandle, PANEL_TAB, 2, &TabPanel_2_Handle);  
    DisplayPanel (panelHandle);
	//SetCtrlAttribute(panelHandle,TABPANEL_0_TEXTBOX_R,ATTR_WRAP_MODE,VAL_CHAR_WRAP);
	//RecallPanelState (panelHandle, "panel_state", 0);				 			  
	COM_Enumerate();
  	GetCtrlVal (panelHandle, PANEL_RING_COM,&sCOM.number);  
	GetDL212Rings();
	GetDL212Numerices();
	GetDL212Strings();
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_TEXTBOX_SDI12CMD_D1,&sDL212_CONFIG.sdi12_cmd[0][0]); 
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_TEXTBOX_SDI12CMD_D2,&sDL212_CONFIG.sdi12_cmd[1][0]); 
	
	ATTRDimmed_Ctrl();	
	
	SetSleepPolicy (VAL_SLEEP_MORE);   
    //RunUserInterface ();
	while(QuitCtrl){
	    ProcessSystemEvents(); 
	}
	DiscardPanel (panelHandle);
	return 0;
}
   
int CVICALLBACK ComSelect_CB (int panel, int control, int event,void *callbackData, int eventData1, int eventData2){
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

int  CVICALLBACK ComCtrl_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
	int res;
	
	switch (event){
		case EVENT_COMMIT:  
			GetCtrlVal (panelHandle, PANEL_TB_COM_CTRL, &sCOM.status); 
	        if(CLOSE == sCOM.status){
				ComWrt (sCOM.number, "value display off", 18);      
				CloseCom (sCOM.number); 
			}
			else{	
				res = OpenComConfig (sCOM.number, "", 115200, 0, 8, 1, 1024, 1024); 
				if(res < 0){
					SetCtrlVal (panelHandle, PANEL_TB_COM_CTRL, 0);
				    MessagePopup ("","     串口打开失败,请检查该串口是否已经被其他程序打开     ");         
				}
				else{
					SetComTime(sCOM.number,2);
					FlushOutQ (sCOM.number);     
				}	  
			}  
			break;
	}
	return 0;
}
 
int  CVICALLBACK MainPanel_CB(int panel, int event, void *callbackData, int eventData1, int eventData2){
	switch (event){
		case EVENT_GOT_FOCUS:
			break;
		case EVENT_LOST_FOCUS:
			break;
		case EVENT_CLOSE:	
			SavePanelState (panelHandle, "panel_state", 0);
			QuitCtrl = 0;
			QuitUserInterface(0);
			break;
	}
	return 0;
}


int  CVICALLBACK NumericesSet_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
	switch (event){    
		case EVENT_LEFT_CLICK:
		case EVENT_RIGHT_CLICK:
		case EVENT_COMMIT:     	
		case EVENT_VAL_CHANGED:
			GetDL212Numerices(); 
		break;
	    default:
		break;
	}
	return 0;
}

int  CVICALLBACK RingsConfig_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
	switch (event){       
		case EVENT_VAL_CHANGED:
			GetDL212Rings();
			ATTRDimmed_Ctrl();
		break;
	    default:
		break;
	}
	return 0;
}
 
int  CVICALLBACK StringsSet_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
	switch (event){       
		case EVENT_VAL_CHANGED:
			GetDL212Strings(); 
		break;
	    default:
		break;
	}
	return 0;
}

int  CVICALLBACK Sdi12CmdSet_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
	int len=0,i;
	
	if(control == TABPANEL_2_TEXTBOX_SDI12CMD_D1){
		i = 0;
	}
	else{
		i = 1;
	}
	switch (event){
		case EVENT_COMMIT:
			//GetCtrlAttribute (TabPanel_2_Handle, control, ATTR_STRING_TEXT_LENGTH, &len);	
			//memset(&sDL212_CONFIG.sdi12_cmd[i][0],0,200);
			GetCtrlVal(TabPanel_2_Handle,control,&sDL212_CONFIG.sdi12_cmd[i][0]);
			if(len > 1){
			    if(sDL212_CONFIG.sdi12_cmd[i][len-1] != '\n'){
			        sDL212_CONFIG.sdi12_cmd[i][len]='\r',sDL212_CONFIG.sdi12_cmd[i][len+1]='\n';
				}
			} 
			//File_2_Handle = OpenFile (File_2_Name, VAL_WRITE_ONLY, VAL_TRUNCATE, VAL_ASCII);
			//WriteFile (File_2_Handle, &sDL212_CONFIG.sdi12_cmd[i][0], 200);
			//CloseFile(File_2_Handle);
	    	//HidePanel(panelHandle_2);      
		break;
	}
	return 0;
}
 
void CVICALLBACK SendConfig_CB(int menubar, int menuItem, void *callbackData, int panel){
	int i=0,j=0,len;
	char buf[66];
    char *p;
	
	GetCtrlVal (panelHandle, PANEL_TB_COM_CTRL, &sCOM.status); 
	if(CLOSE == sCOM.status){
		MessagePopup ("发送配置","     请先打开串口     ");     
	}
	else{
		FlushOutQ (sCOM.number);  
		FlushInQ (sCOM.number);     
		strcpy(buf,"DL212 Configuration Utility Write");
		len = ComWrt (sCOM.number,buf,34);
		SyncWait (Timer(),0.02);
		p = (char *)&sDL212_CONFIG;
		i = sizeof(sDL212_CONFIG)/60+1;
		sDL212_CONFIG.lrc = 0;
		sDL212_CONFIG.lrc = LRC((unsigned char *)p,sizeof(sDL212_CONFIG)-4); 
		for(j=0;j<i-1;j++){
			len = ComWrt (sCOM.number,(const char*)(p+j*60),60); 
			SyncWait (Timer(),0.02);
		} 
		memset(RxBuf,0,10);
		len = ComRdTerm (sCOM.number, RxBuf, 10,0x0A);  
		if(len == -99){
			MessagePopup ("发送配置","    未响应    ");    
			return ;
		}
		if(0 == strncmp("lrc ok",RxBuf,6)){
		   	MessagePopup ("发送配置","    发送完成，擦写FLASH需要2秒左右的时间，请不要立刻断电或者再次发送配置    ");
		}
		else if(0 == strncmp("lrc error",RxBuf,9)){
			MessagePopup ("发送配置","    通讯校验错误    ");
		}
		else{
			MessagePopup ("发送配置","    未响应    ");  	
		}      
	}
}

void CVICALLBACK ReadConfig_CB(int menubar, int menuItem, void *callbackData, int panel){
	int i=0,len=0;
	unsigned char lrc=0;
	char byte,buf[33];
    char *p;
	
	p = &sDL212_CONFIG;
	FlushOutQ (sCOM.number);  
	FlushInQ (sCOM.number);  
	strcpy(buf,"DL212 Configuration Utility Read");
	len = ComWrt (sCOM.number,buf,33);
	while(i < sizeof(sDL212_CONFIG)){
		byte = ComRdByte (sCOM.number);   
		if(byte == -99){
			MessagePopup ("读取配置","   未响应    ");    
			return;
		}
		else{
			*(p+i) = byte;
		}
		i++;
	}
	lrc = LRC((unsigned char *)&sDL212_CONFIG,sizeof(sDL212_CONFIG)-4);
	if(lrc == sDL212_CONFIG.lrc){
	 	MessagePopup ("读取配置","   读取参数完成    ");  
		SetPanelValuesFromFile();
	}
	else{
		 MessagePopup ("读取配置","   读取参数校验错误    ");
	}
}

void CVICALLBACK Exit(int menubar, int menuItem, void *callbackData, int panel){}
void CVICALLBACK File_SaveAs(int menubar, int menuItem, void *callbackData, int panel){}
void CVICALLBACK FileClose(int menubar, int menuItem, void *callbackData, int panel){}
void CVICALLBACK FileOpen_CB(int menubar, int menuItem, void *callbackData, int panel){}
void CVICALLBACK FileSave_CB(int menubar, int menuItem, void *callbackData, int panel){}
void CVICALLBACK Help_CB(int menubar, int menuItem, void *callbackData, int panel){}
void CVICALLBACK About_CB(int menubar, int menuItem, void *callbackData, int panel){}

static const char *DaysOfWeek[] = { "星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六" };
int  CVICALLBACK Timer_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
	unsigned int year, month, day, hour, min, sec, weekDay;
	char buffer[512];
	CVIAbsoluteTime absTime;
	
	switch (event){
		case EVENT_TIMER_TICK:
			GetCurrentCVIAbsoluteTime(&absTime);
			CVIAbsoluteTimeToLocalCalendar(absTime, &year, &month, &day, &hour, &min, &sec, 0, &weekDay);			    
			sprintf(buffer, "%04d/%02d/%02d/%s %02d:%02d:%02d", year,month,day,DaysOfWeek[weekDay],hour,min,sec);   
			SetCtrlVal(panel, PANEL_TEXTMSG_CLOCK_PC, buffer); 
			GetCtrlVal(panelHandle,PANEL_RING_COM ,&sCOM.number);  
			//SavePanelState (panelHandle, "panel_state", 0);
			break;
	}
	return 0;
}	
