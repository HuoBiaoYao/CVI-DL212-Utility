#include "user.h"

struct _COM sCOM;

int Set_ATTR_DIMMED(int state){
    /*SetCtrlAttribute(panelHandle,PANEL_COMMANDBUTTON_3,ATTR_DIMMED,state);
	SetCtrlAttribute(panelHandle,PANEL_COMMANDBUTTON_4,ATTR_DIMMED,state);
    SetCtrlAttribute(panelHandle,PANEL_STRING         ,ATTR_DIMMED,state);
    SetCtrlAttribute(panelHandle,PANEL_NUMERIC        ,ATTR_DIMMED,state);
    SetCtrlAttribute(panelHandle,PANEL_NUMERIC_2      ,ATTR_DIMMED,state);  
    SetCtrlAttribute(panelHandle,PANEL_RING_11        ,ATTR_DIMMED,state);  
    SetCtrlAttribute(panelHandle,PANEL_RING_10        ,ATTR_DIMMED,state);  
    SetCtrlAttribute(panelHandle,PANEL_RING_9         ,ATTR_DIMMED,state);  
    SetCtrlAttribute(panelHandle,PANEL_RING_8         ,ATTR_DIMMED,state);  
    SetCtrlAttribute(panelHandle,PANEL_RING_7         ,ATTR_DIMMED,state);
    SetCtrlAttribute(panelHandle,PANEL_RING_6         ,ATTR_DIMMED,state);
    SetCtrlAttribute(panelHandle,PANEL_RING_5         ,ATTR_DIMMED,state);
    SetCtrlAttribute(panelHandle,PANEL_RING_4         ,ATTR_DIMMED,state);
    SetCtrlAttribute(panelHandle,PANEL_RING_3         ,ATTR_DIMMED,state);
    SetCtrlAttribute(panelHandle,PANEL_RING_2         ,ATTR_DIMMED,state);
    SetCtrlAttribute(panelHandle,PANEL_RING           ,ATTR_DIMMED,state);
    SetCtrlAttribute(panelHandle,PANEL_COMMANDBUTTON_2,ATTR_DIMMED,state);
    SetCtrlAttribute(panelHandle,PANEL_COMMANDBUTTON  ,ATTR_DIMMED,state);
    SetCtrlAttribute(panelHandle,PANEL_COMMANDBUTTON_3,ATTR_DIMMED,state);   
	SetCtrlAttribute(panelHandle,PANEL_COMMANDBUTTON_4,ATTR_DIMMED,state);
	SetCtrlAttribute(panelHandle,PANEL_TOGGLEBUTTON   ,ATTR_DIMMED,state); */
	
	return 0;
}

int COM_Enumerate(void){     
	unsigned char portNumber[100]={0};
	unsigned int size1,size2,values,i;
	int type;
	char valueName[MAX_PATH],deviceName[100][10]={0};

	ClearListCtrl(panelHandle, PANEL_RING_COM);
	RegQueryInfoOnKey (REGKEY_HKLM, "HARDWARE\\DEVICEMAP\\SERIALCOMM" ,NULL, &values, NULL, NULL, NULL);
	for(i=0;i<values;i++) {		 
		size1 = MAX_PATH; size2 = 512;
		RegEnumerateValue (REGKEY_HKLM, "HARDWARE\\DEVICEMAP\\SERIALCOMM",  i, valueName, &size1, &deviceName[i][0], &size2,  &type);
		if( type == _REG_SZ ) {
			if(deviceName[i][4] != 0){
				portNumber[i] = 10*(deviceName[i][3]-0x30)+deviceName[i][4]-0x30;  
			}
		    else{
				portNumber[i] = deviceName[i][3]-0x30;   
			} 
		}   
    }
	qsort (portNumber,i ,1 , Compare);  
	while(i--){
		sprintf(&deviceName[i][0],"COM%d",portNumber[i]);
		InsertListItem (panelHandle, PANEL_RING_COM, 0,&deviceName[i][0], portNumber[i]);  
	}
	    
	return 0;
}

int Compare(const void*a,const void*b){
	return *(unsigned char*)b-*(unsigned char*)a;//½µÐò
}

unsigned char LRC( unsigned char *buf,unsigned short int len){
    unsigned char lrc=0;

    while( len-- ){
        lrc += *buf++;   /* Add buffer byte without carry */
    }
    /* Return twos complement */
    lrc = (unsigned char)(-((char)lrc));
    return lrc;
}
