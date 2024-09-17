/*
 * WDT_interface.h
 *
 *  Created on: Oct 13, 2023
 *      Author: ahmed
 */

#ifndef WDT_INTERFACE_H_
#define WDT_INTERFACE_H_

#define WDTOE	4
#define WDE		3
#define WDP2	2
#define WDP1	1
#define WDP0 	0

// Prescaler values
#define WDT_16_3 0
#define WDT_32_5 1
#define WDT_65	 2
#define WDT_130  3
#define WDT_260  4
#define WDT_520  5
#define WDT_1000 6
#define WDT_2100 7


void WDT_Init(u8 Copy_u8Value);
void WDT_ON(void);
void WDT_OFF(void);







#endif /* WDT_INTERFACE_H_ */
