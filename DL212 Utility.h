/**************************************************************************/
/* LabWindows/CVI User Interface Resource (UIR) Include File              */
/*                                                                        */
/* WARNING: Do not add to, delete from, or otherwise modify the contents  */
/*          of this include file.                                         */
/**************************************************************************/

#include <userint.h>

#ifdef __cplusplus
    extern "C" {
#endif

     /* Panels and Controls: */

#define  PANEL                            1       /* callback function: MainPanel_CB */
#define  PANEL_STRING_DEVICEID            2       /* control type: string, callback function: StringsSet_CB */
#define  PANEL_NUMERIC_SCAN_INTERVAL      3       /* control type: numeric, callback function: NumericesSet_CB */
#define  PANEL_TAB                        4       /* control type: tab, callback function: (none) */
#define  PANEL_RING_COM                   5       /* control type: ring, callback function: ComSelect_CB */
#define  PANEL_TB_COM_CTRL                6       /* control type: textButton, callback function: ComCtrl_CB */
#define  PANEL_STRING_POWER               7       /* control type: string, callback function: (none) */
#define  PANEL_TIMER                      8       /* control type: timer, callback function: Timer_CB */
#define  PANEL_TEXTMSG_CLOCK_PC           9       /* control type: textMsg, callback function: (none) */
#define  PANEL_TEXTMSG_2                  10      /* control type: textMsg, callback function: (none) */
#define  PANEL_TEXTMSG                    11      /* control type: textMsg, callback function: (none) */

     /* tab page panel controls */
#define  TABPANEL_0_TEXTBOX_T             2       /* control type: textBox, callback function: (none) */
#define  TABPANEL_0_TEXTBOX_R             3       /* control type: textBox, callback function: (none) */
#define  TABPANEL_0_RING_DEBUG_MODE       4       /* control type: ring, callback function: Debug_CB */
#define  TABPANEL_0_PICTURE               5       /* control type: picture, callback function: (none) */

     /* tab page panel controls */
#define  TABPANEL_1_RING_VX_SW_3L         2       /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_SW_3L            3       /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_VX_SW_3H         4       /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_NUMERIC_VX_VALUE_3L   5       /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_NUMERIC_OFFSET_3L     6       /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_NUMERIC_MUL_3L        7       /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_RING_SW_3H            8       /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_NUMERIC_VX_VALUE_3H   9       /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_NUMERIC_OFFSET_3H     10      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_NUMERIC_MUL_3H        11      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_TEXTMSG_14            12      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_15            13      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_16            14      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_17            15      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_18            16      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_RING_VX_SW_2L         17      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_SW_2L            18      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_VX_SW_2H         19      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_NUMERIC_VX_VALUE_2L   20      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_NUMERIC_OFFSET_2L     21      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_NUMERIC_MUL_2L        22      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_RING_SW_2H            23      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_NUMERIC_VX_VALUE_2H   24      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_NUMERIC_OFFSET_2H     25      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_NUMERIC_MUL_2H        26      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_TEXTMSG_9             27      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_10            28      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_11            29      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_12            30      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_13            31      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_RING_VX_SW_1L         32      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_SW_1L            33      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_VX_SW_1H         34      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_NUMERIC_VX_VALUE_1L   35      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_NUMERIC_OFFSET_1L     36      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_NUMERIC_MUL_1L        37      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_RING_SW_1H            38      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_RANGE_3L         39      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_RANGE_3H         40      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_RANGE_2L         41      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_RANGE_2H         42      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_RANGE_1L         43      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_RANGE_1H         44      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_MODE_HL3         45      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_MODE_HL2         46      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_RING_MODE_HL1         47      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_1_NUMERIC_VX_VALUE_1H   48      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_NUMERIC_OFFSET_1H     49      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_NUMERIC_MUL_1H        50      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_1_TEXTMSG_4             51      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_8             52      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_5             53      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_7             54      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG               55      /* control type: textMsg, callback function: (none) */

     /* tab page panel controls */
#define  TABPANEL_2_RING_MODE_D2          2       /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_2_RING_SW_D2            3       /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_2_RING_DATATYPE_D2      4       /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_2_RING_MODE_D1          5       /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_2_RING_SW_D1            6       /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_2_RING_DATATYPE_D1      7       /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_2_RING_DATATYPE_PSW     8       /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_2_RING_DATATYPE_PLL     9       /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_2_RING_SW_PLL           10      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_2_STRING_S2_D2          11      /* control type: string, callback function: StringsSet_CB */
#define  TABPANEL_2_STRING_S1_D2          12      /* control type: string, callback function: StringsSet_CB */
#define  TABPANEL_2_STRING_S0_D2          13      /* control type: string, callback function: StringsSet_CB */
#define  TABPANEL_2_NUMERIC_OFFSET_PLL    14      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_2_NUMERIC_OFFSET_D2     15      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_2_NUMERIC_MUL_PLL       16      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_2_NUMERIC_MUL_D2        17      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_2_RING_SW_SW12          18      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_2_TEXTBOX_SDI12CMD_D2   19      /* control type: textBox, callback function: Sdi12CmdSet_CB */
#define  TABPANEL_2_TEXTMSG_5             20      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_STRING_S2_D1          21      /* control type: string, callback function: StringsSet_CB */
#define  TABPANEL_2_STRING_S1_D1          22      /* control type: string, callback function: StringsSet_CB */
#define  TABPANEL_2_STRING_S0_D1          23      /* control type: string, callback function: StringsSet_CB */
#define  TABPANEL_2_RING_SW_PSW           24      /* control type: ring, callback function: RingsConfig_CB */
#define  TABPANEL_2_NUMERIC_OFFSET_D1     25      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_2_NUMERIC_OFFSET_PSW    26      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_2_NUMERIC_MUL_D1        27      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_2_NUMERIC_MUL_PSW       28      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_2_TEXTBOX_SDI12CMD_D1   29      /* control type: textBox, callback function: Sdi12CmdSet_CB */
#define  TABPANEL_2_TEXTMSG_4             30      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_TEXTMSG_3             31      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_TEXTMSG_2             32      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_TEXTMSG               33      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_DECORATION            34      /* control type: deco, callback function: (none) */
#define  TABPANEL_2_DECORATION_2          35      /* control type: deco, callback function: (none) */
#define  TABPANEL_2_DECORATION_3          36      /* control type: deco, callback function: (none) */
#define  TABPANEL_2_DECORATION_4          37      /* control type: deco, callback function: (none) */
#define  TABPANEL_2_DECORATION_5          38      /* control type: deco, callback function: (none) */
#define  TABPANEL_2_NUMERIC_MEATIME_PLL   39      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_2_NUMERIC_MEATIME_PSW   40      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_2_NUMERIC_MEATIME_D1    41      /* control type: numeric, callback function: NumericesSet_CB */
#define  TABPANEL_2_NUMERIC_MEATIME_D2    42      /* control type: numeric, callback function: NumericesSet_CB */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

#define  MENUBAR                          1
#define  MENUBAR_MENU1                    2
#define  MENUBAR_MENU1_FILE_OPEN          3       /* callback function: FileOpen_CB */
#define  MENUBAR_MENU1_FILE_SAVE          4       /* callback function: FileSave_CB */
#define  MENUBAR_MENU1_FILE_SAVEAS        5       /* callback function: File_SaveAs */
#define  MENUBAR_MENU1_FILE_CLOSE         6       /* callback function: FileClose */
#define  MENUBAR_MENU1_SEPARATOR          7
#define  MENUBAR_MENU1_SEPARATOR_2        8
#define  MENUBAR_MENU1_EXIT               9       /* callback function: Exit */
#define  MENUBAR_MENU1_2                  10
#define  MENUBAR_MENU1_2_SEND_CONFIG      11      /* callback function: SendConfig_CB */
#define  MENUBAR_MENU1_2_ITEM2            12      /* callback function: ReadConfig_CB */
#define  MENUBAR_HELP                     13      /* callback function: Help_CB */
#define  MENUBAR_HELP_ABOUT               14      /* callback function: About_CB */


     /* Callback Prototypes: */

void CVICALLBACK About_CB(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK ComCtrl_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK ComSelect_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Debug_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK Exit(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK File_SaveAs(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK FileClose(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK FileOpen_CB(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK FileSave_CB(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK Help_CB(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK MainPanel_CB(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK NumericesSet_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK ReadConfig_CB(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK RingsConfig_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Sdi12CmdSet_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK SendConfig_CB(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK StringsSet_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Timer_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif
