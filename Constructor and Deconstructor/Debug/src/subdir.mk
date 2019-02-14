################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Cat.cpp \
../src/Constructor\ and\ Deconstructor.cpp 

OBJS += \
./src/Cat.o \
./src/Constructor\ and\ Deconstructor.o 

CPP_DEPS += \
./src/Cat.d \
./src/Constructor\ and\ Deconstructor.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Constructor\ and\ Deconstructor.o: ../src/Constructor\ and\ Deconstructor.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Constructor and Deconstructor.d" -MT"src/Constructor\ and\ Deconstructor.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


