/* Keypad interface
author:ahmed
date:10sept2023
*/


#ifndef KPD_INETRFACE_H_
#define KPD_INETRFACE_H_

#define	KPD_PORT		PORT_A
#define ROW_START		PIN_0
#define ROW_END			PIN_3
#define COLUMN_START	PIN_4
#define COLUMN_END		PIN_7


void KPD_init(void);

u8 KPD_GetKey(void);

#endif /*KPD_INTERFACE_H_*/









