/*
 * EXTI_program.c
 *
 *  Created on: Sep 22, 2023
 *      Author: ahmed
 */
#include "STD_types.h"
#include "BIT_MATH.h"
#include "EXTI_register.h"
#include "EXTI_interface.h"



//Callback functions
void (*EXTI0_CALLBACK_PTR)(void)=0;
void (*EXTI1_CALLBACK_PTR)(void)=0;
void (*EXTI2_CALLBACK_PTR)(void)=0;


void EXT0_VID_SET_CALL_BACK(void (*PTR)(void)){
	EXTI0_CALLBACK_PTR=PTR;
}
void EXT1_VID_SET_CALL_BACK(void (*PTR)(void)){
	EXTI1_CALLBACK_PTR=PTR;
}
void EXT2_VID_SET_CALL_BACK(void (*PTR)(void)){
	EXTI2_CALLBACK_PTR=PTR;
}


//ISR
void __vector_1 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_1 (void){
	EXTI0_CALLBACK_PTR();
}
void __vector_2 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_2 (void){
	EXTI1_CALLBACK_PTR();
}
void __vector_3 (void) __attribute__ ((signal,used, externally_visible)) ; \
void __vector_3 (void){
	EXTI2_CALLBACK_PTR();
}




void EXT_INTERRUPT_VID_INIT(void){
	//Interrupt 0
#if EXT0_MODE== LOW_LEVEL
	CLR_BIT(MCUCR,ISC00);
	CLR_BIT(MCUCR,ISC01);
#elif EXT0_MODE== IOC
	SET_BIT(MCUCR,ISC00);
	CLR_BIT(MCUCR,ISC01);
#elif EXT0_MODE== FALLING_EDGE
	CLR_BIT(MCUCR,ISC00);
	SET_BIT(MCUCR,ISC01);
#elif EXT0_MODE== RISING_EDGE
	SET_BIT(MCUCR,ISC00);
	SET_BIT(MCUCR,ISC01);
#else
#endif

	//Interrupt 1
#if EXT1_MODE== LOW_LEVEL
	CLR_BIT(MCUCR,ISC10);
	CLR_BIT(MCUCR,ISC11);
#elif EXT1_MODE== IOC
	SET_BIT(MCUCR,ISC10);
	CLR_BIT(MCUCR,ISC11);
#elif EXT1_MODE== FALLING_EDGE
	CLR_BIT(MCUCR,ISC10);
	SET_BIT(MCUCR,ISC11);
#elif EXT1_MODE== RISING_EDGE
	SET_BIT(MCUCR,ISC10);
	SET_BIT(MCUCR,ISC11);
#else
#endif

	//Interrupt 2
#if EXT2_MODE==FALLING_EDGE
	CLR_BIT(MCUCSR,ISC2);
#elif EXT2_MODE==RISING_EDGE
	SET_BIT(MCUCSR,ISC2);
#else
#endif
}


//Interrupt enable
void EXT_INTERRUPT_VID_ENABLE(u8 interrupt_number){
	switch(interrupt_number){
	case EX0:
		SET_BIT(GICR,INT0);
		break;
	case EX1:
		SET_BIT(GICR,INT1);
		break;
	case EX2:
		SET_BIT(GICR,INT2);
		break;
	default:
		break;
	}
}


//Interrupt disable
void EXT_INTERRUPT_VID_DISABLE(u8 interrupt_number){
	switch(interrupt_number){
	case EX0:
		CLR_BIT(GICR,INT0);
		break;
	case EX1:
		CLR_BIT(GICR,INT1);
		break;
	case EX2:
		CLR_BIT(GICR,INT2);
		break;
	default:
		break;
	}
}





















