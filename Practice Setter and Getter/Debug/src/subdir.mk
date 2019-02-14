################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Cat.cpp \
../src/Practice\ Setter\ and\ Getter.cpp 

OBJS += \
./src/Cat.o \
./src/Practice\ Setter\ and\ Getter.o 

CPP_DEPS += \
./src/Cat.d \
./src/Practice\ Setter\ and\ Getter.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Practice\ Setter\ and\ Getter.o: ../src/Practice\ Setter\ and\ Getter.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Practice Setter and Getter.d" -MT"src/Practice\ Setter\ and\ Getter.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


