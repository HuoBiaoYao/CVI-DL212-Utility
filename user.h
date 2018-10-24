#include <windows.h>  
#include <analysis.h>
#include <formatio.h>
#include "toolbox.h"
#include <utility.h>
#include <ansi_c.h>
#include <rs232.h>   
#include <cvirte.h>		
#include <userint.h>
#include "DL212 Utility.h"	   

#define errChk    


#define CLOSE          0
#define OPEN           1

#define MODE_VOLT_DIFF 0
#define MODE_VOLT_SE   1 

#define MODE_SDI12     0
#define MODE_PULSE	   1
#define MODE_COM	   2

struct _COM{
  unsigned char number;
  int status;
};

struct _DL212_CONFIG{
  char device_id[3];//包含结束符
  unsigned int scan;		 
  unsigned char mode[5];//差分1，差分2，差分3，DI，D2
  unsigned char sw[11];
  unsigned char rang[6];
  unsigned char vx_sw[6];
  float vx_value[6];
  unsigned int mea_time[4];
  float mul[10];
  float offset[10];
  unsigned char datatype[4];//周期，频率，计数
  char s0[3];//分隔符//包含结束符    
  char s1[3];//起始符//包含结束符    
  char s2[3];//终止符//包含结束符    
  char sdi12_cmd[2][200];
  unsigned char lrc;
};

extern struct _COM sCOM; 
struct _DL212_CONFIG sDL212_CONFIG;	
extern int panelHandle,TabPanel_0_Handle,TabPanel_1_Handle,TabPanel_2_Handle;  

int SetPanelValuesFromFile(void);
int GetDL212Rings(void);
int GetDL212Numerices(void);
int GetDL212Strings(void);
int ATTRDimmed_Ctrl(void);
int COM_Enumerate(void);
int Compare(const void*a,const void*b);
unsigned char LRC( unsigned char *buf,unsigned short int len);
