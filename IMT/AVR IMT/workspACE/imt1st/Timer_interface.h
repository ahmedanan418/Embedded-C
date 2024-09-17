/*
 * Timer_interface.h
 *
 *  Created on: Oct 6, 2023
 *      Author: ahmed
 */

#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_

//TCCR0
#define WGM00 6
#define WGM01 3
#define CS02  2
#define CS01  1
#define CS00  0
#define COM01 5
#define COM00 4

//TIMSK
#define OCIE0 1
#define TOIE0 0

//TIFR
#define OCF0 1
#define TOV0 0



void TIM0_voidInitialize(void);

void TIM0_voidSetTimerReg(u8 Copy_u8Value);

void TIM0_voidSetCompareVal(u8 Copy_u8Value);

void TIM0_voidEnableOVINT(void);

void TIM0_voidDisableOVINT(void);

void TIM0_voidEnableCTCINT(void);

void TIM0_voidDisableCTCINT(void);

void TIM0_voidSetOVCallback( void (*callback_Copy_ptr) (void) );

void TIM0_voidSetCTCCallback( void (*callback_Copy_ptr) (void) );

u32 Mapping (u32 Range1_max,u32 Range1_min,u32 Range2_max,u32 Range2_min,u32 Range1_reading);

void TIM1_voidInitialize(void);

void TIM1_A_voidSetCompareVal(u16 Copy_u16Value);

void TIM1_A_voidSetICR(u16 Copy_u16Value);

#endif /* TIMER_INTERFACE_H_ */
