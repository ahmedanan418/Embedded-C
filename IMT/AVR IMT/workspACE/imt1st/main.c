#include<avr/io.h>
#include<util/delay.h>
#include"BIT_MATH.h"
#include"STD_types.h"
#include"DIO_interface.h"
#include"DIO_register.h"
#include"LCD_interface.h"
#include "EXTI_interface.h"
#include "EXTI_register.h"
#include "Global_Interrupt_interface.h"
#include "Global_Interrupt_register.h"
#include "ADC_interface.h"
#include "ADC_register.h"
#include "Timer_interface.h"
#include "Timer_register.h"
#include "WDT_interface.h"
#include "WDT_register.h"
#include "UART_interface.h"
#include "UART_register.h"




/*
void func (void){
	DIO_TogglePinValue(PORT_A,PIN_3);
}
*/



/*u32 count=0;
//Function for timer
void func(void){
	count++;
	if (count==3907){
		count=0;
		TIM0_voidSetTimerReg(192);
		DIO_TogglePinValue(PORT_A,PIN_0);
	}
}
*/


/*
//Functions for ISR
void func1 (void){
	DIO_SetPinDirection(PORT_A,PIN_2,PIN_OUTPUT);
	DIO_TogglePinValue(PORT_A,PIN_2);
}
void func2 (void){
	DIO_SetPinDirection(PORT_A,PIN_3,PIN_OUTPUT);
	DIO_TogglePinValue(PORT_A,PIN_3);
}
void func3(void){
		DIO_SetPortDirection(PORT_A,PORT_OUTPUT);
		DIO_SetPortValue(PORT_A,0x0F);

}
*/


void main (void){


	/*	DDRA=255;
	DDRC=0x00;
	PORTC=0X01;
	while(1){
		if ((PINC & 0x01)==0)
		{
			PORTA=0xff;
			_delay_ms(500);
			PORTA=0x00;
			}
		else{PORTA=0X00;}
		}

//LCD
	LCD_vidInit();
	while(1){
		LCD_vidSendCommand(lcd_Clear);
		Gotoxy(1,0);
		LCD_vidWriteString("AHMED",5);
		_delay_ms(1000);

	}



//Keypad
	KPD_init();
	DIO_SetPortDirection(PORT_B,PORT_OUTPUT);
	u8 arr[10]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
	u8 x;
	while(1){
		x= KPD_GetKey();
		switch (x){
		case(0):
				DIO_SetPortValue(PORT_B,~arr[0]);
		break;

		case(1):
				DIO_SetPortValue(PORT_B,~arr[1]);
		break;

		case(2):
				DIO_SetPortValue(PORT_B,~arr[2]);
		break;

		case(3):
				DIO_SetPortValue(PORT_B,~arr[3]);
		break;

		case(4):
				DIO_SetPortValue(PORT_B,~arr[4]);
		break;

		case(5):
				DIO_SetPortValue(PORT_B,~arr[5]);
		break;

		case(6):
				DIO_SetPortValue(PORT_B,~arr[6]);
		break;

		case(7):
				DIO_SetPortValue(PORT_B,~arr[7]);
		break;

		case(8):
				DIO_SetPortValue(PORT_B,~arr[8]);
		break;

		case(9):
				DIO_SetPortValue(PORT_B,~arr[9]);
		break;

		}
	// DC motor with transistors and push button
	u8 x;
	DIO_SetPortDirection(PORT_C,PORT_INPUT);
	DIO_SetPortValue(PORT_C,PORT_HIGH);

	DIO_SetPinDirection(PORT_A,PIN_0,PIN_OUTPUT);
	while(1){
		u8 x=DIO_GetPinValue(PORT_C,PIN_0);
		if (x==0){
			DIO_SetPinValue(PORT_A,PIN_0,PIN_LOW);
		}
		else {
			DIO_SetPinValue(PORT_A,PIN_0,PIN_HIGH);
		}
	}

  //Stepper motor
	DIO_SetPortDirection(PORT_A,PORT_OUTPUT);
	for (u8 i=0;i<500;i++){
		DIO_SetPinValue(PORT_A,PIN_0,PIN_LOW);
		DIO_SetPinValue(PORT_A,PIN_1,PIN_HIGH);
		DIO_SetPinValue(PORT_A,PIN_2,PIN_HIGH);
		DIO_SetPinValue(PORT_A,PIN_3,PIN_HIGH);
		_delay_ms(5);
		DIO_SetPinValue(PORT_A,PIN_0,PIN_HIGH);
		DIO_SetPinValue(PORT_A,PIN_1,PIN_LOW);
		DIO_SetPinValue(PORT_A,PIN_2,PIN_HIGH);
		DIO_SetPinValue(PORT_A,PIN_3,PIN_HIGH);
		_delay_ms(5);
		DIO_SetPinValue(PORT_A,PIN_0,PIN_HIGH);
		DIO_SetPinValue(PORT_A,PIN_1,PIN_HIGH);
		DIO_SetPinValue(PORT_A,PIN_2,PIN_LOW);
		DIO_SetPinValue(PORT_A,PIN_3,PIN_HIGH);
		_delay_ms(5);
		DIO_SetPinValue(PORT_A,PIN_0,PIN_HIGH);
		DIO_SetPinValue(PORT_A,PIN_1,PIN_HIGH);
		DIO_SetPinValue(PORT_A,PIN_2,PIN_HIGH);
		DIO_SetPinValue(PORT_A,PIN_3,PIN_LOW);
		_delay_ms(5);
	}



//Interrupts
EXT_INTERRUPT_VID_INIT();

DIO_SetPinDirection(PORT_D,PIN_2,PIN_INPUT);
DIO_SetPinValue(PORT_D,PIN_2,PIN_HIGH);
DIO_SetPinDirection(PORT_D,PIN_3,PIN_INPUT);
DIO_SetPinValue(PORT_D,PIN_3,PIN_HIGH);

EXT2_VID_SET_CALL_BACK(func1);
EXT1_VID_SET_CALL_BACK(func2);

EXT_INTERRUPT_VID_ENABLE(EX2);
EXT_INTERRUPT_VID_ENABLE(EX1);

Global_Interrupt_Enable();

while(1){}


//Change pattern with interrupt

	DIO_SetPinDirection(PORT_D,PIN_3,PIN_INPUT);
	DIO_SetPinValue(PORT_D,PIN_3,PIN_HIGH);

	EXT1_VID_SET_CALL_BACK(func3);

	EXT_INTERRUPT_VID_ENABLE(EX1);

	Global_Interrupt_Enable();
while(1){
	DIO_SetPortDirection(PORT_A,PORT_OUTPUT);
	DIO_SetPortValue(PORT_A,0xF0);
	}

	//Potentiometer with LEDs
	ADC_Init();
	DIO_SetPinDirection(PORT_A,PIN_0,PIN_INPUT);
	DIO_SetPortDirection(PORT_B,PORT_OUTPUT);
	while(1){
		u16 READING=ADC_Read(Channel_A0);
		u32 RESULT=((u32)READING*5000)/1024;
		if (RESULT<=1000){
			DIO_SetPinValue(PORT_B,PIN_0,PIN_HIGH);
		}
		else if (RESULT>=1000 && RESULT<2000){
					DIO_SetPinValue(PORT_B,PIN_0,PIN_LOW);
					DIO_SetPinValue(PORT_B,PIN_1,PIN_HIGH);
				}
		else if (RESULT>=2000 && RESULT<3000){
					DIO_SetPinValue(PORT_B,PIN_1,PIN_LOW);
					DIO_SetPinValue(PORT_B,PIN_2,PIN_HIGH);
				}
		else{}
	}



ADC_Init();
DIO_SetPinDirection(PORT_A,PIN_0,PIN_INPUT);
LCD_vidInit();
while(1){
	u16 READING=ADC_Read(Channel_A0);
	u32 RESULT=((u32)READING*5000)/1024;
	u32 TEMP=RESULT/10;

	LCD_vidSendCommand(lcd_Clear);
	LCD_vidWriteString("Temperature= ",13);

	LCD_vidWriteCharctr((TEMP/100)+48);
	LCD_vidWriteCharctr(((TEMP%100)/10)+48);
	LCD_vidWriteCharctr((TEMP%10)+48);

	_delay_ms(2000);



}

	ADC_Init();
	DIO_SetPinDirection(PORT_A,PIN_0,PIN_INPUT);
	DIO_SetPinDirection(PORT_B,PIN_0,PIN_OUTPUT);
	DIO_SetPinDirection(PORT_B,PIN_1,PIN_OUTPUT);
	DIO_SetPinDirection(PORT_B,PIN_2,PIN_OUTPUT);
	LCD_vidInit();
	while(1){
		u16 READING=ADC_Read(Channel_A0);
		u32 RESULT=((u32)READING*5000)/1024;

		LCD_vidSendCommand(lcd_Clear);
		//LCD_vidWriteString("Temperature= ",13);

		LCD_vidWriteCharctr((RESULT/1000)+48);
		LCD_vidWriteCharctr(((RESULT%1000)/100)+48);
		LCD_vidWriteCharctr(((RESULT%100)/10)+48);
		LCD_vidWriteCharctr((RESULT%10)+48);

		if (RESULT>3000){
			DIO_SetPinValue(PORT_B,PIN_0,PIN_HIGH);
			DIO_SetPinValue(PORT_B,PIN_1,PIN_LOW);
			DIO_SetPinValue(PORT_B,PIN_2,PIN_LOW);
		}
		else if(RESULT>2000 && RESULT<3000){
			DIO_SetPinValue(PORT_B,PIN_0,PIN_LOW);
			DIO_SetPinValue(PORT_B,PIN_1,PIN_HIGH);
			DIO_SetPinValue(PORT_B,PIN_2,PIN_LOW);
		}
		else if(RESULT<2000){
			DIO_SetPinValue(PORT_B,PIN_1,PIN_LOW);
			DIO_SetPinValue(PORT_B,PIN_2,PIN_HIGH);
			DIO_SetPinValue(PORT_B,PIN_0,PIN_LOW);
		}
		else {
		}

		_delay_ms(2000);



	}




//Timer LED blink
DIO_SetPinDirection(PORT_A,PIN_0,PIN_OUTPUT);
DIO_SetPinValue(PORT_A,PIN_0,PIN_LOW);
TIM0_voidInitialize();
TIM0_voidEnableOVINT();
Global_Interrupt_Enable();
TIM0_voidSetTimerReg(192);
TIM0_voidSetOVCallback(func);
while(1){}


//Change buzzer frequency with POT
ADC_Init();
TIM0_voidInitialize();

DIO_SetPinDirection(PORT_A,PIN_3,PIN_OUTPUT);
DIO_SetPinValue(PORT_A,PIN_3,PIN_LOW);
DIO_SetPinDirection(PORT_A,PIN_0,PIN_INPUT);

TIM0_voidEnableCTCINT();
Global_Interrupt_Enable();
TIM0_voidSetCTCCallback(func);

while(1){
	TIM0_voidSetCompareVal(Mapping(1023,0,255,0,ADC_Read(Channel_A0)));
}




//PWM led
ADC_Init();
TIM0_voidInitialize();

DIO_SetPinDirection(PORT_B,PIN_3,PIN_OUTPUT);
DIO_SetPinValue(PORT_A,PIN_3,PIN_HIGH);
DIO_SetPinDirection(PORT_A,PIN_0,PIN_INPUT);

while(1){
	TIM0_voidSetCompareVal(Mapping(1023,0,255,0,ADC_Read(Channel_A0)));
}




//Servo Motor
	ADC_Init();
	TIM1_voidInitialize();

	DIO_SetPinDirection(PORT_D,PIN_5,PIN_OUTPUT);
	DIO_SetPinDirection(PORT_A,PIN_0,PIN_INPUT);

	TIM1_A_voidSetICR(2000);

	while(1){
		TIM1_A_voidSetCompareVal(Mapping(1023,0,2500,500,ADC_Read(Channel_A0)));
	}



//Watch dog timer test
DIO_SetPinDirection(PORT_A,PIN_0,PIN_OUTPUT);
DIO_SetPinValue(PORT_A,PIN_0,PIN_HIGH);
_delay_ms(500);
DIO_SetPinValue(PORT_A,PIN_0,PIN_LOW);

WDT_Init(WDT_2100);
WDT_ON();

while(1){}
*/

DIO_SetPortDirection(PORT_B,PORT_OUTPUT);
UART_init();


while(1){

	u8 reading;
	reading=UART_recievechar();
	switch(reading){
	case '0':
		DIO_TogglePinValue(PORT_B,PIN_0);
		break;
	case '1':
		DIO_TogglePinValue(PORT_B,PIN_1);
		break;
	case '2':
		DIO_TogglePinValue(PORT_B,PIN_2);
		break;
	case '3':
		DIO_TogglePinValue(PORT_B,PIN_3);
		break;

	}

}





















}

