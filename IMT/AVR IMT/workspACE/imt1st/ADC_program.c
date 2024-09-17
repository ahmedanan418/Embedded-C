/*
 * ADC_program.c
 *
 *  Created on: Sep 29, 2023
 *      Author: ahmed
 */
#include "STD_types.h"
#include "BIT_MATH.h"
#include "ADC_register.h"
#include "ADC_interface.h"


void ADC_Init(void){
	//AREF
	CLR_BIT(ADMUX,REFS1);
	SET_BIT(ADMUX,REFS0);
	//Right adjustment
	CLR_BIT(ADMUX,ADLAR);
	//Prescaler
	SET_BIT(ADCSRA,ADPS0);
	SET_BIT(ADCSRA,ADPS1);
	SET_BIT(ADCSRA,ADPS2);
	//Enable
	SET_BIT(ADCSRA,ADEN);
}


u16 ADC_Read(u8 Channel){
	ADMUX=((ADMUX&0b11100000)|(Channel));
	SET_BIT(ADCSRA,ADSC);
	while(GET_BIT(ADCSRA,ADIF)==0);
		SET_BIT(ADCSRA,ADIF);
		return ADC_Reg;
}
