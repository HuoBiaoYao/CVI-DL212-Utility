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

#define  PANEL                            1       /* callback function: MainPanel */
#define  PANEL_STRING_DEVICEID            2       /* control type: string, callback function: (none) */
#define  PANEL_NUMERIC_SCAN_INTERVAL      3       /* control type: numeric, callback function: (none) */
#define  PANEL_TAB                        4       /* control type: tab, callback function: (none) */
#define  PANEL_RING_COM                   5       /* control type: ring, callback function: ComSelect */
#define  PANEL_TEXTMSG_CLOCK_PC           6       /* control type: textMsg, callback function: (none) */
#define  PANEL_TEXTMSG                    7       /* control type: textMsg, callback function: (none) */
#define  PANEL_TB_COM_CTRL                8       /* control type: textButton, callback function: ComCtrl */
#define  PANEL_TIMER                      9       /* control type: timer, callback function: Clock */
#define  PANEL_TEXTMSG_2                  10      /* control type: textMsg, callback function: (none) */

     /* tab page panel controls */
#define  TABPANEL_0_TEXTBOX_T             2       /* control type: textBox, callback function: (none) */
#define  TABPANEL_0_TEXTBOX_R             3       /* control type: textBox, callback function: RxTextBox */
#define  TABPANEL_0_RING_DEBUG_MODE       4       /* control type: ring, callback function: DebugMode */
#define  TABPANEL_0_COMMANDBUTTON_TX      5       /* control type: command, callback function: DebugTx */

     /* tab page panel controls */
#define  TABPANEL_1_RING_VX_SW_3L         2       /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_SW_3L            3       /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_VX_SW_3H         4       /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_NUMERIC_VX_VALUE_3L   5       /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_NUMERIC_OFFSET_3L     6       /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_NUMERIC_MUL_3L        7       /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_RING_SW_3H            8       /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_NUMERIC_VX_VALUE_3H   9       /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_NUMERIC_OFFSET_3H     10      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_NUMERIC_MUL_3H        11      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_14            12      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_15            13      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_16            14      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_17            15      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_18            16      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_RING_VX_SW_2L         17      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_SW_2L            18      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_VX_SW_2H         19      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_NUMERIC_VX_VALUE_2L   20      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_NUMERIC_OFFSET_2L     21      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_NUMERIC_MUL_2L        22      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_RING_SW_2H            23      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_NUMERIC_VX_VALUE_2H   24      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_NUMERIC_OFFSET_2H     25      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_NUMERIC_MUL_2H        26      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_9             27      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_10            28      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_11            29      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_12            30      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_13            31      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_RING_VX_SW_1L         32      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_SW_1L            33      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_VX_SW_1H         34      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_NUMERIC_VX_VALUE_1L   35      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_NUMERIC_OFFSET_1L     36      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_NUMERIC_MUL_1L        37      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_RING_SW_1H            38      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_RANGE_3L         39      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_RANGE_3H         40      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_RANGE_2L         41      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_RANGE_2H         42      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_RANGE_1L         43      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_RANGE_1H         44      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_MODE_HL3         45      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_MODE_HL2         46      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_RING_MODE_HL1         47      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_1_NUMERIC_VX_VALUE_1H   48      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_NUMERIC_OFFSET_1H     49      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_NUMERIC_MUL_1H        50      /* control type: numeric, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_4             51      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_8             52      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_5             53      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_7             54      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG               55      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_RING_FILTER_L3        56      /* control type: ring, callback function: (none) */
#define  TABPANEL_1_RING_FILTER_H3        57      /* control type: ring, callback function: (none) */
#define  TABPANEL_1_RING_FILTER_L2        58      /* control type: ring, callback function: (none) */
#define  TABPANEL_1_RING_FILTER_H2        59      /* control type: ring, callback function: (none) */
#define  TABPANEL_1_RING_FILTER_L1        60      /* control type: ring, callback function: (none) */
#define  TABPANEL_1_RING_FILTER_H1        61      /* control type: ring, callback function: (none) */
#define  TABPANEL_1_RING_REVDIFF_HL3      62      /* control type: ring, callback function: (none) */
#define  TABPANEL_1_RING_REVDIFF_HL2      63      /* control type: ring, callback function: (none) */
#define  TABPANEL_1_RING_REVDIFF_HL1      64      /* control type: ring, callback function: (none) */
#define  TABPANEL_1_DECORATION_3          65      /* control type: deco, callback function: (none) */
#define  TABPANEL_1_DECORATION_2          66      /* control type: deco, callback function: (none) */
#define  TABPANEL_1_DECORATION            67      /* control type: deco, callback function: (none) */

     /* tab page panel controls */
#define  TABPANEL_2_RING_MODE_D2          2       /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_2_RING_SW_D2            3       /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_2_RING_DATATYPE_D2      4       /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_2_RING_MODE_D1          5       /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_2_RING_SW_D1            6       /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_2_RING_DATATYPE_D1      7       /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_2_RING_DATATYPE_PSW     8       /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_2_RING_DATATYPE_PLL     9       /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_2_RING_SW_PLL           10      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_2_STRING_S2_D2          11      /* control type: string, callback function: (none) */
#define  TABPANEL_2_STRING_S1_D2          12      /* control type: string, callback function: (none) */
#define  TABPANEL_2_STRING_S0_D2          13      /* control type: string, callback function: (none) */
#define  TABPANEL_2_NUMERIC_OFFSET_PLL    14      /* control type: numeric, callback function: (none) */
#define  TABPANEL_2_NUMERIC_OFFSET_D2     15      /* control type: numeric, callback function: (none) */
#define  TABPANEL_2_NUMERIC_MUL_PLL       16      /* control type: numeric, callback function: (none) */
#define  TABPANEL_2_NUMERIC_MUL_D2        17      /* control type: numeric, callback function: (none) */
#define  TABPANEL_2_RING_SW_SW12          18      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_2_TEXTBOX_SDI12CMD_D2   19      /* control type: textBox, callback function: Sdi12CmdSet */
#define  TABPANEL_2_TEXTMSG_5             20      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_STRING_S2_D1          21      /* control type: string, callback function: (none) */
#define  TABPANEL_2_STRING_S1_D1          22      /* control type: string, callback function: (none) */
#define  TABPANEL_2_STRING_S0_D1          23      /* control type: string, callback function: (none) */
#define  TABPANEL_2_RING_SW_PSW           24      /* control type: ring, callback function: RingsConfig */
#define  TABPANEL_2_NUMERIC_OFFSET_D1     25      /* control type: numeric, callback function: (none) */
#define  TABPANEL_2_NUMERIC_OFFSET_PSW    26      /* control type: numeric, callback function: (none) */
#define  TABPANEL_2_NUMERIC_MUL_D1        27      /* control type: numeric, callback function: (none) */
#define  TABPANEL_2_NUMERIC_MUL_PSW       28      /* control type: numeric, callback function: (none) */
#define  TABPANEL_2_TEXTBOX_SDI12CMD_D1   29      /* control type: textBox, callback function: Sdi12CmdSet */
#define  TABPANEL_2_TEXTMSG_4             30      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_TEXTMSG_3             31      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_TEXTMSG_2             32      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_TEXTMSG               33      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_NUMERIC_MEATIME_PLL   34      /* control type: numeric, callback function: (none) */
#define  TABPANEL_2_NUMERIC_MEATIME_PSW   35      /* control type: numeric, callback function: (none) */
#define  TABPANEL_2_NUMERIC_MEATIME_D1    36      /* control type: numeric, callback function: (none) */
#define  TABPANEL_2_NUMERIC_MEATIME_D2    37      /* control type: numeric, callback function: (none) */
#define  TABPANEL_2_DECORATION_5          38      /* control type: deco, callback function: (none) */
#define  TABPANEL_2_DECORATION_4          39      /* control type: deco, callback function: (none) */
#define  TABPANEL_2_DECORATION_3          40      /* control type: deco, callback function: (none) */
#define  TABPANEL_2_DECORATION_2          41      /* control type: deco, callback function: (none) */
#define  TABPANEL_2_DECORATION            42      /* control type: deco, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

#define  MAINMENU                         1
#define  MAINMENU_FILE                    2
#define  MAINMENU_FILE_OPEN               3       /* callback function: FileOpen */
#define  MAINMENU_FILE_SAVE               4       /* callback function: FileSave */
#define  MAINMENU_FILE_SAVEAS             5       /* callback function: FileSaveAs */
#define  MAINMENU_FILE_TOP_SEPARATOR      6
#define  MAINMENU_FILE_ABOVE_EXIT_LINE    7
#define  MAINMENU_MENU1_2                 8
#define  MAINMENU_MENU1_2_SEND_CONFIG     9       /* callback function: SendConfig */
#define  MAINMENU_MENU1_2_ITEM2           10      /* callback function: ReadConfig */
#define  MAINMENU_MENU2                   11
#define  MAINMENU_MENU2_ITEM4             12      /* callback function: Version */

#define  MENUBAR                          2
#define  MENUBAR_MENU1                    2
#define  MENUBAR_MENU1_ITEM1              3       /* callback function: ClearBox */


     /* Callback Prototypes: */

void CVICALLBACK ClearBox(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK Clock(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK ComCtrl(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK ComSelect(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK DebugMode(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK DebugTx(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK FileOpen(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK FileSave(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK FileSaveAs(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK MainPanel(int panel, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK ReadConfig(int menubar, int menuItem, void *callbackData, int panel);
int  CVICALLBACK RingsConfig(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK RxTextBox(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Sdi12CmdSet(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
void CVICALLBACK SendConfig(int menubar, int menuItem, void *callbackData, int panel);
void CVICALLBACK Version(int menubar, int menuItem, void *callbackData, int panel);


#ifdef __cplusplus
    }
#endif
