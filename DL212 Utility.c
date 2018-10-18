#include "user.h"

unsigned char QuitCtrl=1;
int PANEL_TB_COM_CTRL_Value;	   
int panelHandle,TabPanel_0_Handle,TabPanel_1_Handle,TabPanel_2_Handle;

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
	//RecallPanelState (panelHandle, "panel_state", 0);				 			  
	COM_Enumerate();
  	GetCtrlVal (panelHandle, PANEL_RING_COM,&sCOM.number);  
			    
	SetSleepPolicy (VAL_SLEEP_MORE);   
    //RunUserInterface ();
	while(QuitCtrl){
	    ProcessSystemEvents(); 
	}
	DiscardPanel (panelHandle);
	return 0;
}
   
int CVICALLBACK ComSelect_CB (int panel, int control, int event,
							 void *callbackData, int eventData1, int eventData2){
	switch (event){
		case EVENT_LEFT_CLICK:
			COM_Enumerate();
			SetCtrlVal (panelHandle, PANEL_RING_COM, sCOM.number);
			break;
		case EVENT_COMMIT:
			ComWrt (sCOM.number, "value display off", 18);  
			//Set_ATTR_DIMMED(1);								   
			SetCtrlVal (panelHandle, PANEL_TB_COM_CTRL, 0);
			CloseCom (sCOM.number);
			PANEL_TB_COM_CTRL_Value = 0;
			SetCtrlVal (panelHandle, PANEL_TB_COM_CTRL,PANEL_TB_COM_CTRL_Value);
			sCOM.status = -1;
			GetCtrlVal (panelHandle, PANEL_RING_COM, &sCOM.number);
			break;
	}
	return 0;
}

int  CVICALLBACK ComCtrl_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2){
	switch (event){
		case EVENT_COMMIT:  
			GetCtrlVal (panelHandle, PANEL_TB_COM_CTRL, &PANEL_TB_COM_CTRL_Value); 
	        if(0 == PANEL_TB_COM_CTRL_Value){
				ComWrt (sCOM.number, "value display off", 18);  
				//Set_ATTR_DIMMED(1);								   
				//SetCtrlVal (panelHandle, PANEL_TOGGLEBUTTON, 0);
				CloseCom (sCOM.number);
				sCOM.status = -1;
			}
			else{	
				sCOM.status = OpenComConfig (sCOM.number, "", 115200, 0, 8, 1, 1024, 1024); 
				if(sCOM.status < 0){
					SetCtrlVal (panelHandle, PANEL_TB_COM_CTRL, 0);
				    MessagePopup ("","     串口打开失败,请检查该串口是否已经被其他程序打开     ");         
				}
				else{
					SetComTime(sCOM.number,2);
					FlushOutQ (sCOM.number);
				    //Set_ATTR_DIMMED(0);      
				}	  
			}  
			break;
	}
	return 0;
}
 
int  CVICALLBACK MainPanel_CB(int panel, int event, void *callbackData, int eventData1, int eventData2){
	switch (event)
	{
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
	
	return 0;
}
 
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
			
			//GetConfig();
			//SavePanelState (panelHandle, "panel_state", 0);
			break;
	}
	return 0;
}	
 
