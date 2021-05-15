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
snake_7_segment.lss \

FLASH_IMAGE += \
snake_7_segment.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: snake_7_segment.elf secondary-outputs

# Tool invocations
snake_7_segment.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,snake_7_segment.map -mmcu=atmega32 -o "snake_7_segment.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

snake_7_segment.lss: snake_7_segment.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S snake_7_segment.elf  >"snake_7_segment.lss"
	@echo 'Finished building: $@'
	@echo ' '

snake_7_segment.hex: snake_7_segment.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex snake_7_segment.elf  "snake_7_segment.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: snake_7_segment.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 snake_7_segment.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) snake_7_segment.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
