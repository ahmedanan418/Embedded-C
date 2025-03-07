/*
 * UART_register.h
 *
 *  Created on: Oct 14, 2023
 *      Author: ahmed
 */

#ifndef UART_REGISTER_H_
#define UART_REGISTER_H_

#define UDR 	*((volatile u8*)(0x2C))
#define UCSRA 	*((volatile u8*)(0x2B))
#define RXC    7
#define UDRE   5
#define UCSRB	*((volatile u8*)(0x2A))
#define RXCIE  7
#define TXCIE  6
#define UDRIE  5
#define RXEN   4
#define TXEN   3
#define UCSZ2  2
#define RXB8   1
#define TXB8   0
#define UCSRC 	*((volatile u8*)(0x40))
#define URSEL  7
#define UMSEL  6
#define UPM1   5
#define UPM0   4
#define USBS   3
#define UCSZ1  2
#define UCSZ0  1
#define UCPOL  0
#define UBRRH 	*((volatile u8*)(0x40))
#define UBRRL 	*((volatile u8*)(0x29))


#endif /* UART_REGISTER_H_ */
