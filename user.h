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

#define CLOSE     0
#define OPER      1

#define VOLT_DIFF 0
#define VOLT_SE   1 

struct _COM{
  unsigned char number;
  int status;
};

struct _DL212_CONFIG{
  char device_id[2];
  unsigned int scan;
  unsigned char mode[5];//���1�����2�����3��DI��D2
  unsigned char sw[11];
  unsigned char rang[6];
  unsigned char vx_sw[6];
  float vx_value[6];
  float mul[10];
  float offset[10];
  unsigned char datatype[4];//���ڣ�Ƶ�ʣ�����
  char s0[2];//�ָ���
  char s1[2];//��ʼ��
  char s2[2];//��ֹ��
  char sdi12_cmd[2][400];
};

extern struct _COM sCOM; 
struct _DL212_CONFIG sDL212_CONFIG;	
extern int panelHandle,TabPanel_0_Handle,TabPanel_1_Handle,TabPanel_2_Handle;  

int GetDL212Rings(void);
int GetDL212Numerices(void);
int GetDL212Strings(void);
int ATTRDimmed_Ctrl(void);
int COM_Enumerate(void);
int Compare(const void*a,const void*b);
unsigned char LRC( unsigned char *buf,unsigned short int len);
