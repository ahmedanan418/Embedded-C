################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC_program.c \
../DIO_program.c \
../EXTI_program.c \
../Global_Interrupt_program.c \
../KPD_program.c \
../LCD_program.c \
../Timer_program.c \
../UART_program.c \
../WDT_program.c \
../main.c 

OBJS += \
./ADC_program.o \
./DIO_program.o \
./EXTI_program.o \
./Global_Interrupt_program.o \
./KPD_program.o \
./LCD_program.o \
./Timer_program.o \
./UART_program.o \
./WDT_program.o \
./main.o 

C_DEPS += \
./ADC_program.d \
./DIO_program.d \
./EXTI_program.d \
./Global_Interrupt_program.d \
./KPD_program.d \
./LCD_program.d \
./Timer_program.d \
./UART_program.d \
./WDT_program.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


