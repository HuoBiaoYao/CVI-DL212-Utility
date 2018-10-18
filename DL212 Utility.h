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
#define  PANEL_STRING_DEVICEID            2       /* control type: string, callback function: DeviceID_CB */
#define  PANEL_NUMERIC_SCAN_INTERVAL      3       /* control type: numeric, callback function: ScanInterval_CB */
#define  PANEL_TAB                        4       /* control type: tab, callback function: (none) */
#define  PANEL_RING_COM                   5       /* control type: ring, callback function: ComSelect_CB */
#define  PANEL_TB_COM_CTRL                6       /* control type: textButton, callback function: ComCtrl_CB */
#define  PANEL_STRING_POWER               7       /* control type: string, callback function: PowerDispaly_CB */
#define  PANEL_TIMER                      8       /* control type: timer, callback function: Timer_CB */
#define  PANEL_TEXTMSG_CLOCK_PC           9       /* control type: textMsg, callback function: (none) */

     /* tab page panel controls */
#define  TABPANEL_1_RING_VX_SW_3L         2       /* control type: ring, callback function: Vx_Switch_3L_CB */
#define  TABPANEL_1_RING_SW_3L            3       /* control type: ring, callback function: Switch_3L_CB */
#define  TABPANEL_1_RING_VX_SW_3H         4       /* control type: ring, callback function: Vx_Switch_3H_CB */
#define  TABPANEL_1_NUMERIC_VX_VALUE_3L   5       /* control type: numeric, callback function: Vx_Value_3L_CB */
#define  TABPANEL_1_NUMERIC_OFFSET_3L     6       /* control type: numeric, callback function: Offset_3L_CB */
#define  TABPANEL_1_NUMERIC_MUL_3L        7       /* control type: numeric, callback function: Mul_3L_CB */
#define  TABPANEL_1_RING_SW_3H            8       /* control type: ring, callback function: Switch_3H_CB */
#define  TABPANEL_1_RING_MODE_HL3         9       /* control type: ring, callback function: SetMode_HL3_CB */
#define  TABPANEL_1_NUMERIC_VX_VALUE_3H   10      /* control type: numeric, callback function: Vx_Value_3H_CB */
#define  TABPANEL_1_NUMERIC_OFFSET_3H     11      /* control type: numeric, callback function: Offset_3H_CB */
#define  TABPANEL_1_NUMERIC_MUL_3H        12      /* control type: numeric, callback function: Mul_3H_CB */
#define  TABPANEL_1_DECORATION_3          13      /* control type: deco, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_14            14      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_15            15      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_16            16      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_17            17      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_18            18      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_RING_VX_SW_2L         19      /* control type: ring, callback function: Vx_Switch_2L_CB */
#define  TABPANEL_1_RING_SW_2L            20      /* control type: ring, callback function: Switch_2L_CB */
#define  TABPANEL_1_RING_VX_SW_2H         21      /* control type: ring, callback function: Vx_Switch_2H_CB */
#define  TABPANEL_1_NUMERIC_VX_VALUE_2L   22      /* control type: numeric, callback function: Vx_Value_2L_CB */
#define  TABPANEL_1_NUMERIC_OFFSET_2L     23      /* control type: numeric, callback function: Offset_2L_CB */
#define  TABPANEL_1_NUMERIC_MUL_2L        24      /* control type: numeric, callback function: Mul_2L_CB */
#define  TABPANEL_1_RING_SW_2H            25      /* control type: ring, callback function: Switch_2H_CB */
#define  TABPANEL_1_RING_MODE_HL2         26      /* control type: ring, callback function: SetMode_HL2_CB */
#define  TABPANEL_1_NUMERIC_VX_VALUE_2H   27      /* control type: numeric, callback function: Vx_Value_2H_CB */
#define  TABPANEL_1_NUMERIC_OFFSET_2H     28      /* control type: numeric, callback function: Offset_2H_CB */
#define  TABPANEL_1_NUMERIC_MUL_2H        29      /* control type: numeric, callback function: Mul_2H_CB */
#define  TABPANEL_1_DECORATION_2          30      /* control type: deco, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_9             31      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_10            32      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_11            33      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_12            34      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_13            35      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_RING_VX_SW_1L         36      /* control type: ring, callback function: Vx_Switch_1L_CB */
#define  TABPANEL_1_RING_SW_1L            37      /* control type: ring, callback function: Switch_1L_CB */
#define  TABPANEL_1_RING_VX_SW_1H         38      /* control type: ring, callback function: Vx_Switch_1H_CB */
#define  TABPANEL_1_NUMERIC_VX_VALUE_1L   39      /* control type: numeric, callback function: Vx_Value_1L_CB */
#define  TABPANEL_1_NUMERIC_OFFSET_1L     40      /* control type: numeric, callback function: Offset_1L_CB */
#define  TABPANEL_1_NUMERIC_MUL_1L        41      /* control type: numeric, callback function: Mul_1L_CB */
#define  TABPANEL_1_RING_SW_1H            42      /* control type: ring, callback function: Switch_1H_CB */
#define  TABPANEL_1_RING_RANGE_3L         43      /* control type: ring, callback function: Range_3L_CB */
#define  TABPANEL_1_RING_RANGE_3H         44      /* control type: ring, callback function: Range_3H_CB */
#define  TABPANEL_1_RING_RANGE_2L         45      /* control type: ring, callback function: Range_2L_CB */
#define  TABPANEL_1_RING_RANGE_2H         46      /* control type: ring, callback function: Range_2H_CB */
#define  TABPANEL_1_RING_RANGE_1L         47      /* control type: ring, callback function: Range_1L_CB */
#define  TABPANEL_1_RING_RANGE_1H         48      /* control type: ring, callback function: Range_1H_CB */
#define  TABPANEL_1_RING_MODE_HL1         49      /* control type: ring, callback function: SetMode_HL1_CB */
#define  TABPANEL_1_NUMERIC_VX_VALUE_1H   50      /* control type: numeric, callback function: Vx_Value_1H_CB */
#define  TABPANEL_1_NUMERIC_OFFSET_1H     51      /* control type: numeric, callback function: Offset_1H_CB */
#define  TABPANEL_1_NUMERIC_MUL_1H        52      /* control type: numeric, callback function: Mul_1H_CB */
#define  TABPANEL_1_DECORATION            53      /* control type: deco, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_4             54      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_8             55      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_5             56      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG_7             57      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_1_TEXTMSG               58      /* control type: textMsg, callback function: (none) */

     /* tab page panel controls */
#define  TABPANEL_2_RING_MODE_D2          2       /* control type: ring, callback function: SetMode_D2_CB */
#define  TABPANEL_2_RING_SW_D2            3       /* control type: ring, callback function: Switch_D2_CB */
#define  TABPANEL_2_RING_MODE_D1          4       /* control type: ring, callback function: SetMode_D1_CB */
#define  TABPANEL_2_RING_SW_D1            5       /* control type: ring, callback function: Switch_D1_CB */
#define  TABPANEL_2_RING_MODE_PSW         6       /* control type: ring, callback function: SetMode_PSW_CB */
#define  TABPANEL_2_RING_MODE_PLL         7       /* control type: ring, callback function: SetMode_PLL_CB */
#define  TABPANEL_2_RING_SW_PLL           8       /* control type: ring, callback function: Switch_PLL_CB */
#define  TABPANEL_2_NUMERIC_OFFSET_PLL    9       /* control type: numeric, callback function: Offset_PLL_CB */
#define  TABPANEL_2_NUMERIC_MUL_PLL       10      /* control type: numeric, callback function: Mul_PLL_CB */
#define  TABPANEL_2_RING_SW_SW12          11      /* control type: ring, callback function: Switch_SW12_CB */
#define  TABPANEL_2_STRING_ENDSYMBOL_D2   12      /* control type: string, callback function: EndSymbol_D2_CB */
#define  TABPANEL_2_STRING_STARTSYMBOL_D2 13      /* control type: string, callback function: StartSymbol_D2_CB */
#define  TABPANEL_2_STRING_SEPARATOR_D2   14      /* control type: string, callback function: Separator_D2_CB */
#define  TABPANEL_2_TEXTBOX_SDI12CMD_D2   15      /* control type: textBox, callback function: Sdi12Cmd_D2 */
#define  TABPANEL_2_RING_SW_PSW           16      /* control type: ring, callback function: Switch_PSW_CB */
#define  TABPANEL_2_NUMERIC_OFFSET_PSW    17      /* control type: numeric, callback function: Offset_PSW_CB */
#define  TABPANEL_2_NUMERIC_MUL_PSW       18      /* control type: numeric, callback function: Mul_PSW_CB */
#define  TABPANEL_2_STRING_ENDSYMBOL_D1   19      /* control type: string, callback function: EndSymbol_D1_CB */
#define  TABPANEL_2_STRING_STARTSYMBOL_D1 20      /* control type: string, callback function: StartSymbol_D1_CB */
#define  TABPANEL_2_STRING_SEPARATOR_D1   21      /* control type: string, callback function: Separator_D1_CB */
#define  TABPANEL_2_TEXTBOX_SDI12CMD_D1   22      /* control type: textBox, callback function: Sdi12Cmd_D1 */
#define  TABPANEL_2_TEXTMSG_5             23      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_TEXTMSG_4             24      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_TEXTMSG_3             25      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_TEXTMSG_2             26      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_TEXTMSG               27      /* control type: textMsg, callback function: (none) */
#define  TABPANEL_2_DECORATION_5          28      /* control type: deco, callback function: (none) */
#define  TABPANEL_2_DECORATION_4          29      /* control type: deco, callback function: (none) */
#define  TABPANEL_2_DECORATION_3          30      /* control type: deco, callback function: (none) */
#define  TABPANEL_2_DECORATION_2          31      /* control type: deco, callback function: (none) */
#define  TABPANEL_2_DECORATION            32      /* control type: deco, callback function: (none) */


     /* Control Arrays: */

          /* (no control arrays in the resource file) */


     /* Menu Bars, Menus, and Menu Items: */

#define  MENUBAR                          1
#define  MENUBAR_MENU1                    2
#define  MENUBAR_MENU1_2                  3
#define  MENUBAR_MENU1_2_ITEM1            4
#define  MENUBAR_MENU1_2_ITEM2            5
#define  MENUBAR_MENU2                    6


     /* Callback Prototypes: */

int  CVICALLBACK ComCtrl_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK ComSelect_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK DeviceID_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK EndSymbol_D1_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK EndSymbol_D2_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK MainPanel_CB(int panel, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Mul_1H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Mul_1L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Mul_2H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Mul_2L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Mul_3H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Mul_3L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Mul_PLL_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Mul_PSW_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Offset_1H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Offset_1L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Offset_2H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Offset_2L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Offset_3H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Offset_3L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Offset_PLL_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Offset_PSW_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK PowerDispaly_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Range_1H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Range_1L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Range_2H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Range_2L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Range_3H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Range_3L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK ScanInterval_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Sdi12Cmd_D1(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Sdi12Cmd_D2(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Separator_D1_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Separator_D2_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SetMode_D1_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SetMode_D2_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SetMode_HL1_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SetMode_HL2_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SetMode_HL3_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SetMode_PLL_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK SetMode_PSW_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK StartSymbol_D1_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK StartSymbol_D2_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Switch_1H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Switch_1L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Switch_2H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Switch_2L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Switch_3H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Switch_3L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Switch_D1_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Switch_D2_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Switch_PLL_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Switch_PSW_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Switch_SW12_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Timer_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Vx_Switch_1H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Vx_Switch_1L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Vx_Switch_2H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Vx_Switch_2L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Vx_Switch_3H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Vx_Switch_3L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Vx_Value_1H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Vx_Value_1L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Vx_Value_2H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Vx_Value_2L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Vx_Value_3H_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);
int  CVICALLBACK Vx_Value_3L_CB(int panel, int control, int event, void *callbackData, int eventData1, int eventData2);


#ifdef __cplusplus
    }
#endif
