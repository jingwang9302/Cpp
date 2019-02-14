################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Interger\ Type.cpp 

OBJS += \
./src/Interger\ Type.o 

CPP_DEPS += \
./src/Interger\ Type.d 


# Each subdirectory must supply rules for building sources it contributes
src/Interger\ Type.o: ../src/Interger\ Type.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Interger Type.d" -MT"src/Interger\ Type.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


