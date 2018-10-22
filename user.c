#include "user.h"
#include "DL212 Utility.h"

struct _COM sCOM;
struct _DL212_CONFIG sDL212_CONFIG;			 

int SetPanelValuesFromFile(void){
  return 0;
}

int GetDL212Rings(void){ 
 	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_MODE_HL1,&sDL212_CONFIG.mode[0]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_MODE_HL2,&sDL212_CONFIG.mode[1]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_MODE_HL3,&sDL212_CONFIG.mode[2]);
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_RING_MODE_D1,&sDL212_CONFIG.mode[3]);
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_RING_MODE_D2,&sDL212_CONFIG.mode[4]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_SW_1H,&sDL212_CONFIG.sw[0]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_SW_1L,&sDL212_CONFIG.sw[1]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_SW_2H,&sDL212_CONFIG.sw[2]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_SW_2L,&sDL212_CONFIG.sw[3]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_SW_3H,&sDL212_CONFIG.sw[4]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_SW_3L,&sDL212_CONFIG.sw[5]);
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_RING_SW_SW12,&sDL212_CONFIG.sw[6]);   
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_RING_SW_PSW,&sDL212_CONFIG.sw[7]);
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_RING_SW_PLL,&sDL212_CONFIG.sw[8]);
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_RING_SW_D1,&sDL212_CONFIG.sw[9]);
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_RING_SW_D2,&sDL212_CONFIG.sw[10]);     
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_1H ,&sDL212_CONFIG.rang[0]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_1L ,&sDL212_CONFIG.rang[1]); 
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_2H ,&sDL212_CONFIG.rang[2]); 
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_2L ,&sDL212_CONFIG.rang[3]); 
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_3H ,&sDL212_CONFIG.rang[4]); 
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_3L ,&sDL212_CONFIG.rang[5]);     
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_1H ,&sDL212_CONFIG.vx_sw[0]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_1L ,&sDL212_CONFIG.vx_sw[1]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_2H ,&sDL212_CONFIG.vx_sw[2]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_2L ,&sDL212_CONFIG.vx_sw[3]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_3H ,&sDL212_CONFIG.vx_sw[4]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_3L ,&sDL212_CONFIG.vx_sw[5]);   
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_PSW ,&sDL212_CONFIG.datatype[0]); 
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_PLL ,&sDL212_CONFIG.datatype[1]);
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_D1 ,&sDL212_CONFIG.datatype[2]);  
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_D2 ,&sDL212_CONFIG.datatype[3]);  

	return 0;
}

int GetDL212Numerices(void){
	GetCtrlVal(panelHandle,PANEL_NUMERIC_SCAN_INTERVAL,&sDL212_CONFIG.scan);   
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_1H ,&sDL212_CONFIG.vx_value[0]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_1L ,&sDL212_CONFIG.vx_value[1]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_2H ,&sDL212_CONFIG.vx_value[2]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_2L ,&sDL212_CONFIG.vx_value[3]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_3H ,&sDL212_CONFIG.vx_value[4]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_3L ,&sDL212_CONFIG.vx_value[5]);		    
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_1H ,&sDL212_CONFIG.mul[0]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_1L ,&sDL212_CONFIG.mul[1]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_2H ,&sDL212_CONFIG.mul[2]); 
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_2L ,&sDL212_CONFIG.mul[3]); 
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_3H ,&sDL212_CONFIG.mul[4]); 
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_3L ,&sDL212_CONFIG.mul[5]); 
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_PSW ,&sDL212_CONFIG.mea_time[0]);                 	
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_PLL ,&sDL212_CONFIG.mea_time[1]); 
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_D1 ,&sDL212_CONFIG.mea_time[2]); 
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_D2 ,&sDL212_CONFIG.mea_time[3]); 
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_PSW  ,&sDL212_CONFIG.mul[6]); 
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_PLL ,&sDL212_CONFIG.mul[7]); 
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_D1 ,&sDL212_CONFIG.mul[8]); 
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_D2 ,&sDL212_CONFIG.mul[9]);  
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_1H ,&sDL212_CONFIG.offset[0]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_1L ,&sDL212_CONFIG.offset[1]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_2H ,&sDL212_CONFIG.offset[2]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_2L ,&sDL212_CONFIG.offset[3]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_3H ,&sDL212_CONFIG.offset[4]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_3L ,&sDL212_CONFIG.offset[5]);
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_PSW ,&sDL212_CONFIG.offset[6]);
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_PLL ,&sDL212_CONFIG.offset[7]);
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D1 ,&sDL212_CONFIG.offset[8]);
	GetCtrlVal(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D2 ,&sDL212_CONFIG.offset[9]);
  	return 0;	
}

int GetDL212Strings(void){
	GetCtrlVal(panelHandle,PANEL_STRING_DEVICEID,(char*)&sDL212_CONFIG.device_id);
	/*GetCtrlVal(TabPanel_1_Handle,TABPANEL_2_STRING_S0_D1,(char*)&sDL212_CONFIG.s0[0]);  
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_2_STRING_S0_D2,(char*)&sDL212_CONFIG.s0[1]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_2_STRING_S1_D1,(char*)&sDL212_CONFIG.s1[0]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_2_STRING_S1_D2,(char*)&sDL212_CONFIG.s1[1]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_2_STRING_S2_D1,(char*)&sDL212_CONFIG.s2[0]);
	GetCtrlVal(TabPanel_1_Handle,TABPANEL_2_STRING_S2_D2,(char*)&sDL212_CONFIG.s2[1]);*/
	//GetCtrlVal(TabPanel_1_Handle, ,&sDL212_CONFIG.sdi12_cmd[0]);
	//GetCtrlVal(TabPanel_1_Handle, ,&sDL212_CONFIG.sdi12_cmd[1]); 
  	return 0;	
}
   
int ATTRDimmed_Ctrl(void){
	//HL1通道
	if(CLOSE == sDL212_CONFIG.sw[0]){
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_1H ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_1H ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_1H ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_1H ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_1H ,ATTR_DIMMED,1);
	}
	else{
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_1H ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_1H ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_1H ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_1H ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_1H ,ATTR_DIMMED,0); 
		if(CLOSE == sDL212_CONFIG.vx_sw[0]){
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_1H ,ATTR_DIMMED,1); 
		}
		else{
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_1H ,ATTR_DIMMED,0); 
		}
	}
	if(MODE_VOLT_DIFF == sDL212_CONFIG.mode[0]){
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_1L ,ATTR_DIMMED,1);
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_SW_1L ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_1L ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_1L ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_1L ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_1L ,ATTR_DIMMED,1);  
	}
	else{
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_1L ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_SW_1L ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_1L ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_1L ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_1L ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_1L ,ATTR_DIMMED,0); 
		if(CLOSE == sDL212_CONFIG.sw[1]){
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_1L ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_1L ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_1L ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_1L ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_1L ,ATTR_DIMMED,1);
		}
		else{
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_1L ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_1L ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_1L ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_1L ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_1L ,ATTR_DIMMED,0); 
			if(CLOSE == sDL212_CONFIG.vx_sw[1]){
				SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_1L ,ATTR_DIMMED,1); 
			}
			else{
				SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_1L ,ATTR_DIMMED,0); 
			}
		}  
	}   
	//HL2通道
	if(CLOSE == sDL212_CONFIG.sw[2]){
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_2H ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_2H ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_2H ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_2H ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_2H ,ATTR_DIMMED,1);
	}
	else{
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_2H ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_2H ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_2H ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_2H ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_2H ,ATTR_DIMMED,0); 
		if(CLOSE == sDL212_CONFIG.vx_sw[2]){
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_2H ,ATTR_DIMMED,1); 
		}
		else{
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_2H ,ATTR_DIMMED,0); 
		}
	}
	if(MODE_VOLT_DIFF == sDL212_CONFIG.mode[1]){
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_2L ,ATTR_DIMMED,1);
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_SW_2L ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_2L ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_2L ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_2L ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_2L ,ATTR_DIMMED,1);  
	}
	else{
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_2L ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_SW_2L ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_2L ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_2L ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_2L ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_2L ,ATTR_DIMMED,0); 
		if(CLOSE == sDL212_CONFIG.sw[3]){
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_2L ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_2L ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_2L ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_2L ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_2L ,ATTR_DIMMED,1);
		}
		else{
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_2L ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_2L ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_2L ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_2L ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_2L ,ATTR_DIMMED,0); 
			if(CLOSE == sDL212_CONFIG.vx_sw[3]){
				SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_2L ,ATTR_DIMMED,1); 
			}
			else{
				SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_2L ,ATTR_DIMMED,0); 
			}
		}  
	}
 	//HL3通道
	if(CLOSE == sDL212_CONFIG.sw[4]){
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_3H ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_3H ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_3H ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_3H ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_3H ,ATTR_DIMMED,1);
	}
	else{
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_3H ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_3H ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_3H ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_3H ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_3H ,ATTR_DIMMED,0); 
		if(CLOSE == sDL212_CONFIG.vx_sw[4]){
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_3H ,ATTR_DIMMED,1); 
		}
		else{
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_3H ,ATTR_DIMMED,0); 
		}
	}
	if(MODE_VOLT_DIFF == sDL212_CONFIG.mode[2]){
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_3L ,ATTR_DIMMED,1);
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_SW_3L ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_3L ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_3L ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_3L ,ATTR_DIMMED,1); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_3L ,ATTR_DIMMED,1);  
	}
	else{
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_3L ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_SW_3L ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_3L ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_3L ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_3L ,ATTR_DIMMED,0); 
		SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_3L ,ATTR_DIMMED,0); 
		if(CLOSE == sDL212_CONFIG.sw[5]){
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_3L ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_3L ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_3L ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_3L ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_3L ,ATTR_DIMMED,1);
		}
		else{
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_VX_SW_3L ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_3L ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_OFFSET_3L ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_MUL_3L ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_RING_RANGE_3L ,ATTR_DIMMED,0); 
			if(CLOSE == sDL212_CONFIG.vx_sw[5]){
				SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_3L ,ATTR_DIMMED,1); 
			}
			else{
				SetCtrlAttribute(TabPanel_1_Handle,TABPANEL_1_NUMERIC_VX_VALUE_3L ,ATTR_DIMMED,0); 
			}
		}  
	} 
	//PSW通道
	if(CLOSE == sDL212_CONFIG.sw[7]){    
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_PSW ,ATTR_DIMMED,1);                
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_PSW ,ATTR_DIMMED,1);    
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_PSW ,ATTR_DIMMED,1);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_PSW ,ATTR_DIMMED,1);
	}
	else{
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_PSW ,ATTR_DIMMED,0);       
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_PSW ,ATTR_DIMMED,0);	
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_PSW ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_PSW ,ATTR_DIMMED,0);
	}
	//PLL通道
	if(CLOSE == sDL212_CONFIG.sw[8]){ 
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_PLL ,ATTR_DIMMED,1);       
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_PLL ,ATTR_DIMMED,1);	
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_PLL ,ATTR_DIMMED,1);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_PLL ,ATTR_DIMMED,1);	
	}
	else{
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_PLL ,ATTR_DIMMED,0);       
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_PLL ,ATTR_DIMMED,0);	
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_PLL ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_PLL ,ATTR_DIMMED,0);
	}
	//D1通道
	if(CLOSE == sDL212_CONFIG.sw[9]){     
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_MODE_D1 ,ATTR_DIMMED,1);	
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_D1 ,ATTR_DIMMED,1);       
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_D1 ,ATTR_DIMMED,1);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D1 ,ATTR_DIMMED,1);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_D1 ,ATTR_DIMMED,1);        
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S0_D1 ,ATTR_DIMMED,1);     
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S1_D1 ,ATTR_DIMMED,1);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S2_D1 ,ATTR_DIMMED,1);	   
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_TEXTBOX_SDI12CMD_D1 ,ATTR_DIMMED,1);
	}
	else{
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_MODE_D1 ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_D1 ,ATTR_DIMMED,1);       
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_D1 ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D1 ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_D1 ,ATTR_DIMMED,0);	    
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S0_D1 ,ATTR_DIMMED,0);     
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S1_D1 ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S2_D1 ,ATTR_DIMMED,0);	   
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_TEXTBOX_SDI12CMD_D1 ,ATTR_DIMMED,0);
		if(MODE_SDI12 == sDL212_CONFIG.mode[3]){
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_D1 ,ATTR_DIMMED,1);       
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_D1 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D1 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_D1 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_TEXTBOX_SDI12CMD_D1 ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S0_D1 ,ATTR_DIMMED,1);     
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S1_D1 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S2_D1 ,ATTR_DIMMED,1);	
		}
		else if(MODE_PULSE == sDL212_CONFIG.mode[3]){
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_D1 ,ATTR_DIMMED,0);       
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_D1 ,ATTR_DIMMED,0);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D1 ,ATTR_DIMMED,0);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_D1 ,ATTR_DIMMED,0);  
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_TEXTBOX_SDI12CMD_D1 ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S0_D1 ,ATTR_DIMMED,1);     
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S1_D1 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S2_D1 ,ATTR_DIMMED,1);
		}
		else{
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_D1 ,ATTR_DIMMED,1);       
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_D1 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D1 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_D1 ,ATTR_DIMMED,1);  
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_TEXTBOX_SDI12CMD_D1 ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S0_D1 ,ATTR_DIMMED,0);     
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S1_D1 ,ATTR_DIMMED,0);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S2_D1 ,ATTR_DIMMED,0);
		}
		
	}
	//D2通道
	if(MODE_VOLT_DIFF == sDL212_CONFIG.sw[10]){     
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_MODE_D2 ,ATTR_DIMMED,1);	
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_D2 ,ATTR_DIMMED,1);      
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_D2 ,ATTR_DIMMED,1);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D2 ,ATTR_DIMMED,1);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_D2 ,ATTR_DIMMED,1);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D2 ,ATTR_DIMMED,1);    
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S0_D2 ,ATTR_DIMMED,1);     
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S1_D2 ,ATTR_DIMMED,1);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S2_D2 ,ATTR_DIMMED,1);	   
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_TEXTBOX_SDI12CMD_D2 ,ATTR_DIMMED,1);	
	}
	else{
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_MODE_D2 ,ATTR_DIMMED,0);	
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_D2 ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_D2 ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D2 ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_D2 ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D2 ,ATTR_DIMMED,0);    
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S0_D2 ,ATTR_DIMMED,0);     
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S1_D2 ,ATTR_DIMMED,0);
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S2_D2 ,ATTR_DIMMED,0);	   
		SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_TEXTBOX_SDI12CMD_D2 ,ATTR_DIMMED,0);
		if(MODE_SDI12 == sDL212_CONFIG.mode[4]){
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_D2 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_D2 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D2 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_D2 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_TEXTBOX_SDI12CMD_D2 ,ATTR_DIMMED,0); 
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S0_D2 ,ATTR_DIMMED,1);     
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S1_D2 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S2_D2 ,ATTR_DIMMED,1);	
		}
		else if(MODE_PULSE == sDL212_CONFIG.mode[4]){
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_D2 ,ATTR_DIMMED,0);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_D2 ,ATTR_DIMMED,0);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D2 ,ATTR_DIMMED,0);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_D2 ,ATTR_DIMMED,0);  
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_TEXTBOX_SDI12CMD_D2 ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S0_D2 ,ATTR_DIMMED,1);     
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S1_D2 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S2_D2 ,ATTR_DIMMED,1);
		}
		else{
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MEATIME_D2 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_RING_DATATYPE_D2 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_OFFSET_D2 ,ATTR_DIMMED,1);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_NUMERIC_MUL_D2 ,ATTR_DIMMED,1);  
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_TEXTBOX_SDI12CMD_D2 ,ATTR_DIMMED,1); 
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S0_D2 ,ATTR_DIMMED,0);     
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S1_D2 ,ATTR_DIMMED,0);
			SetCtrlAttribute(TabPanel_2_Handle,TABPANEL_2_STRING_S2_D2 ,ATTR_DIMMED,0);
		}
	}
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
	return *(unsigned char*)b-*(unsigned char*)a;//降序
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
