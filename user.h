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

#define ERROR   1
#define	OK		0

#define CLOSE          0
#define OPEN           1

#define MODE_VOLT_DIFF 0
#define MODE_VOLT_SE   1 

#define MODE_SDI12     0
#define MODE_PULSE	   1
#define MODE_COM	   2

#define VALUE_DISPLAY_ON    0
#define VALUE_DISPLAY_OFF   1
#define SDI12_0_TRANSPARENT 2
#define SDI12_1_TRANSPARENT 3

struct _COM{
  unsigned char number;
  int status;
};

struct _DL212_CONFIG{
  char device_id[3];//����������
  unsigned int scan;		 
  unsigned char mode[5];//���1�����2�����3��DI��D2
  unsigned char sw[11];
  unsigned char range[6];
  unsigned char vx_sw[6];
  float vx_value[6];
  unsigned int mea_time[4];
  float mul[10];
  float offset[10];
  unsigned char datatype[4];//���ڣ�Ƶ�ʣ�����
  char s0[2][3];//�ָ���//����������    
  char s1[2][3];//��ʼ��//����������    
  char s2[2][3];//��ֹ��//����������    
  char sdi12_cmd[2][300];
  unsigned char lrc;
};

extern struct _COM sCOM; 
extern struct _DL212_CONFIG sDL212_CONFIG;	
extern unsigned char IS_SDI12CMD_OK[2]; 
extern int panelHandle,TabPanel_0_Handle,TabPanel_1_Handle,TabPanel_2_Handle;  

int SetPanelValuesFromFile(struct _DL212_CONFIG *buf);
int GetPanelValues(void);
int GetDL212Rings(void);
int GetDL212Numerices(void);
int GetDL212Strings(void);
int ATTRDimmed_Ctrl(void);
int SDI12CMD_Check(unsigned char port,char *c,unsigned int len);
int COM_Enumerate(void);
int Compare(const void*a,const void*b);
unsigned char LRC( unsigned char *buf,unsigned short int len);

			   
