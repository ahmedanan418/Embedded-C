/*
 * WDT_program.c
 *
 *  Created on: Oct 13, 2023
 *      Author: ahmed
 */
#include "STD_types.h"
#include "BIT_MATH.h"
#include "WDT_interface.h"
#include "WDT_register.h"



void WDT_Init(u8 Copy_u8Value){

	switch(Copy_u8Value){
	case 0:
		CLR_BIT(WDTCR,WDP2);
		CLR_BIT(WDTCR,WDP1);
		CLR_BIT(WDTCR,WDP0);
		break;
	case 1:
		CLR_BIT(WDTCR,WDP2);
		CLR_BIT(WDTCR,WDP1);
		SET_BIT(WDTCR,WDP0);
		break;
	case 2:
		CLR_BIT(WDTCR,WDP2);
		SET_BIT(WDTCR,WDP1);
		CLR_BIT(WDTCR,WDP0);
		break;
	case 3:
		CLR_BIT(WDTCR,WDP2);
		SET_BIT(WDTCR,WDP1);
		SET_BIT(WDTCR,WDP0);
		break;
	case 4:
		SET_BIT(WDTCR,WDP2);
		CLR_BIT(WDTCR,WDP1);
		CLR_BIT(WDTCR,WDP0);
		break;
	case 5:
		SET_BIT(WDTCR,WDP2);
		CLR_BIT(WDTCR,WDP1);
		SET_BIT(WDTCR,WDP0);
		break;
	case 6:
		SET_BIT(WDTCR,WDP2);
		SET_BIT(WDTCR,WDP1);
		CLR_BIT(WDTCR,WDP0);
		break;
	case 7:
		SET_BIT(WDTCR,WDP2);
		SET_BIT(WDTCR,WDP1);
		SET_BIT(WDTCR,WDP0);
		break;

	}
}


void WDT_OFF(void){
	/* Write logical one to WDTOE and WDE */
	WDTCR = (1<<WDTOE) | (1<<WDE);
	/* Turn off WDT */
	WDTCR = 0x00;
}


void WDT_ON(void){
	WDTCR|=(1<< WDE);
}


















