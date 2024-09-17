/*
 * EXTI_interface.h
 *
 *  Created on: Sep 22, 2023
 *      Author: ahmed
 */

#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_

//Enable-Disable
#define INT0  6
#define INT1  7
#define INT2  5

//Interrupt 2
#define ISC2 6

//Interrupt 0-1
#define ISC11 3
#define ISC10 2
#define ISC00 0
#define ISC01 1

//Flags
#define INTF0 7
#define INTF1 6
#define INTF2 5

//
#define EX0 0
#define EX1 1
#define EX2 2

#define LOW_LEVEL 0
#define RISING_EDGE 3
#define FALLING_EDGE 2
#define IOC 1

#define EXT0_MODE IOC
#define EXT1_MODE IOC
#define EXT2_MODE FALLING_EDGE

void EXT_INTE00RRUPT_VID_INIT(void);
void EXT_INTERRUPT_VID_ENABLE(u8 interrupt_number);
void EXT_INTERRUPT_VID_DISABLE(u8 interrupt_number);
void EXT_INTERRUPT_VID_SET_MODE(u8 interrupt_number, u8 mode);
void EXT0_VID_SET_CALL_BACK(void (*PTR)(void));
void EXT1_VID_SET_CALL_BACK(void (*PTR)(void));
void EXT2_VID_SET_CALL_BACK(void (*PTR)(void));

#endif /* EXTI_INTERFACE_H_ */
