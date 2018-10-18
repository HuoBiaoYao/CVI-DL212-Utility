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

struct _COM{
  unsigned char number;
  int status;
};
extern struct _COM sCOM; 

extern int panelHandle;

int Set_ATTR_DIMMED(int state);
int COM_Enumerate(void);
int Compare(const void*a,const void*b);
unsigned char LRC( unsigned char *buf,unsigned short int len);
