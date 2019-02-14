################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Prototyprs\ and\ Includes.cpp 

OBJS += \
./src/Prototyprs\ and\ Includes.o 

CPP_DEPS += \
./src/Prototyprs\ and\ Includes.d 


# Each subdirectory must supply rules for building sources it contributes
src/Prototyprs\ and\ Includes.o: ../src/Prototyprs\ and\ Includes.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Prototyprs and Includes.d" -MT"src/Prototyprs\ and\ Includes.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


