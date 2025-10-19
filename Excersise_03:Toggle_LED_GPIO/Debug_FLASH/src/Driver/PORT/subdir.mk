################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Driver/PORT/PORT.c 

OBJS += \
./src/Driver/PORT/PORT.o 

C_DEPS += \
./src/Driver/PORT/PORT.d 


# Each subdirectory must supply rules for building sources it contributes
src/Driver/PORT/%.o: ../src/Driver/PORT/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Driver/PORT/PORT.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


