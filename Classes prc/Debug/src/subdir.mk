################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Classes\ prc.cpp \
../src/Jeroo.cpp 

OBJS += \
./src/Classes\ prc.o \
./src/Jeroo.o 

CPP_DEPS += \
./src/Classes\ prc.d \
./src/Jeroo.d 


# Each subdirectory must supply rules for building sources it contributes
src/Classes\ prc.o: ../src/Classes\ prc.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Classes prc.d" -MT"src/Classes\ prc.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


