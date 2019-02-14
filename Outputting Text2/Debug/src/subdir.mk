################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Outputting\ Text2.cpp 

OBJS += \
./src/Outputting\ Text2.o 

CPP_DEPS += \
./src/Outputting\ Text2.d 


# Each subdirectory must supply rules for building sources it contributes
src/Outputting\ Text2.o: ../src/Outputting\ Text2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Outputting Text2.d" -MT"src/Outputting\ Text2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


