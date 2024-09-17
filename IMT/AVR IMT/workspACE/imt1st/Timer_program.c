/*
 * Timer_program.c
 *
 *  Created on: Oct 6, 2023
 *      Author: ahmed
 */
#include "STD_types.h"
#include "BIT_MATH.h"
#include "Timer_interface.h"
#include "Timer_register.h"



void (*OVF_0_callback) (void)= 0;
void (*CTC_0_callback) (void)= 0;

void TIM0_voidInitialize(void){
//Select mode manually
SET_BIT(TCCR0_Register,WGM01);
SET_BIT(TCCR0_Register,WGM00);

//Fast PWM mode manually
SET_BIT(TCCR0_Register,COM01);
CLR_BIT(TCCR0_Register,COM00);

CLR_BIT(TCCR0_Register,CS00);
CLR_BIT(TCCR0_Register,CS02);
SET_BIT(TCCR0_Register,CS01);
}

void TIM0_voidSetTimerReg(u8 Copy_u8Value){
TCNT0_Register= Copy_u8Value;
}

void TIM0_voidSetCompareVal(u8 Copy_u8Value){
OCR0_Register=Copy_u8Value;
}

void TIM0_voidEnableOVINT(void){
	SET_BIT(TIMSK_Register,0);
}

void TIM0_voidDisableOVINT(void){
	CLR_BIT(TIMSK_Register,0);
}

void TIM0_voidEnableCTCINT(void){
	SET_BIT(TIMSK_Register,1);
}

void TIM0_voidDisableCTCINT(void){
	CLR_BIT(TIMSK_Register,1);
}

void TIM0_voidSetOVCallback( void (*callback_Copy_ptr) (void) ){
	OVF_0_callback=callback_Copy_ptr;

}

void TIM0_voidSetCTCCallback( void (*callback_Copy_ptr) (void) ){
	CTC_0_callback=callback_Copy_ptr;
}



void __vector_10 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_10 (void){
	CTC_0_callback();
}


void __vector_11 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_11 (void){
	OVF_0_callback();
}

u32 Mapping (u32 Range1_max,u32 Range1_min,u32 Range2_max,u32 Range2_min,u32 Range1_reading){

	return (Range2_max-((Range2_max-Range2_min)*(Range1_max-Range1_reading)/(Range1_max-Range1_min)));
}

void TIM1_voidInitialize(void){
SET_BIT(TCCR1A_Register,7);
CLR_BIT(TCCR1A_Register,6);

SET_BIT(TCCR1A_Register,1);
CLR_BIT(TCCR1A_Register,0);
SET_BIT(TCCR1B_Register,3);
SET_BIT(TCCR1B_Register,4);

//Prescaler
CLR_BIT(TCCR1B_Register,0);
CLR_BIT(TCCR1B_Register,2);
SET_BIT(TCCR1B_Register,1);

}
void TIM1_A_voidSetCompareVal(u16 Copy_u16Value){
OCR1A_Register=Copy_u16Value;
}

void TIM1_A_voidSetICR(u16 Copy_u16Value){
ICR1_Register=Copy_u16Value;
}


