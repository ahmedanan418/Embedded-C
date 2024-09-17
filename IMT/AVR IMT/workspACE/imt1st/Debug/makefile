################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
imt1st.lss \

FLASH_IMAGE += \
imt1st.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: imt1st.elf secondary-outputs

# Tool invocations
imt1st.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,imt1st.map -mmcu=atmega32 -o "imt1st.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

imt1st.lss: imt1st.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S imt1st.elf  >"imt1st.lss"
	@echo 'Finished building: $@'
	@echo ' '

imt1st.hex: imt1st.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex imt1st.elf  "imt1st.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: imt1st.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 imt1st.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) imt1st.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
