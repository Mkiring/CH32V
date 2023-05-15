################################################################################
# MRS Version: {"version":"1.8.4","date":"2023/02/015"}
# ◊‘∂Ø…˙≥…µƒŒƒº˛°£≤ª“™±‡º≠£°
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include User/subdir.mk
-include Startup/subdir.mk
-include Peripheral/src/subdir.mk
-include Debug/subdir.mk
-include Core/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
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
SECONDARY_FLASH += \
1.2_LED…¡À∏.hex \

SECONDARY_LIST += \
1.2_LED…¡À∏.lst \

SECONDARY_SIZE += \
1.2_LED…¡À∏.siz \


# À˘”–ƒø±Í
all: 1.2_LED…¡À∏.elf secondary-outputs

# π§æﬂµ˜”√
1.2_LED…¡À∏.elf: $(OBJS) $(USER_OBJS)
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -T "C:\Users\26488\Desktop\CH32V—ßœ∞º«¬º\1.2_LED…¡À∏\Ld\Link.ld" -nostartfiles -Xlinker --gc-sections -Wl,-Map,"1.2_LED…¡À∏.map" --specs=nano.specs --specs=nosys.specs -o "1.2_LED…¡À∏.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@	@
1.2_LED…¡À∏.hex: 1.2_LED…¡À∏.elf
	@	riscv-none-embed-objcopy -O ihex "1.2_LED…¡À∏.elf"  "1.2_LED…¡À∏.hex"
	@	@
1.2_LED…¡À∏.lst: 1.2_LED…¡À∏.elf
	@	riscv-none-embed-objdump --all-headers --demangle --disassemble "1.2_LED…¡À∏.elf" > "1.2_LED…¡À∏.lst"
	@	@
1.2_LED…¡À∏.siz: 1.2_LED…¡À∏.elf
	@	riscv-none-embed-size --format=berkeley "1.2_LED…¡À∏.elf"
	@	@
# ∆‰À˚ƒø±Í
clean:
	-$(RM) $(ASM_UPPER_DEPS)$(OBJS)$(SECONDARY_FLASH)$(SECONDARY_LIST)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_DEPS)$(S_UPPER_DEPS)$(C_DEPS) 1.2_LED…¡À∏.elf
	-@
secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_LIST) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
