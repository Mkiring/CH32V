################################################################################
# MRS Version: {"version":"1.8.4","date":"2023/02/015"}
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/ch32v10x_it.c \
../User/main.c \
../User/system_ch32v10x.c 

OBJS += \
./User/ch32v10x_it.o \
./User/main.o \
./User/system_ch32v10x.o 

C_DEPS += \
./User/ch32v10x_it.d \
./User/main.d \
./User/system_ch32v10x.d 


# Each subdirectory must supply rules for building sources it contributes
User/%.o: ../User/%.c
	@	@	riscv-none-embed-gcc -march=rv32imac -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\Users\26488\Desktop\CH32V学习记录\1.1_点亮LED\Debug" -I"C:\Users\26488\Desktop\CH32V学习记录\1.1_点亮LED\Core" -I"C:\Users\26488\Desktop\CH32V学习记录\1.1_点亮LED\User" -I"C:\Users\26488\Desktop\CH32V学习记录\1.1_点亮LED\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

