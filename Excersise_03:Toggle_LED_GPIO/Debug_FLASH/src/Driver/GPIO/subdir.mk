################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Driver/GPIO/GPIO.c 

OBJS += \
./src/Driver/GPIO/GPIO.o 

C_DEPS += \
./src/Driver/GPIO/GPIO.d 


# Each subdirectory must supply rules for building sources it contributes
src/Driver/GPIO/%.o: ../src/Driver/GPIO/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Driver/GPIO/GPIO.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


