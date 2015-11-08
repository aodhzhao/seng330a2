################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Patrol.cpp \
../src/Ship.cpp \
../src/ShipManager.cpp \
../src/Submarine.cpp 

OBJS += \
./src/Patrol.o \
./src/Ship.o \
./src/ShipManager.o \
./src/Submarine.o 

CPP_DEPS += \
./src/Patrol.d \
./src/Ship.d \
./src/ShipManager.d \
./src/Submarine.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/Users/aodhzhao/Documents/workspace/Seng330A2/Include" -I"/Users/aodhzhao/Documents/workspace/Seng330A2/src" -I"/Users/aodhzhao/Documents/workspace/Seng330A2/Tests" -I"/Users/aodhzhao/Documents/workspace/Seng330A2/gtest_src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


