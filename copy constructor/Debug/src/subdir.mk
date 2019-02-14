################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/copy\ constructor.cpp 

OBJS += \
./src/copy\ constructor.o 

CPP_DEPS += \
./src/copy\ constructor.d 


# Each subdirectory must supply rules for building sources it contributes
src/copy\ constructor.o: ../src/copy\ constructor.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/copy constructor.d" -MT"src/copy\ constructor.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


