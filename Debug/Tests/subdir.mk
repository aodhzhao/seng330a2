################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Tests/InvokeTests.cpp \
../Tests/PatrolTest.cpp \
../Tests/ShipManagerTest.cpp \
../Tests/SubmarineTest.cpp 

OBJS += \
./Tests/InvokeTests.o \
./Tests/PatrolTest.o \
./Tests/ShipManagerTest.o \
./Tests/SubmarineTest.o 

CPP_DEPS += \
./Tests/InvokeTests.d \
./Tests/PatrolTest.d \
./Tests/ShipManagerTest.d \
./Tests/SubmarineTest.d 


# Each subdirectory must supply rules for building sources it contributes
Tests/%.o: ../Tests/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/Users/aodhzhao/Documents/workspace/Seng330A2/gtest_src" -I"/Users/aodhzhao/Documents/workspace/Seng330A2/src" -I"/Users/aodhzhao/Documents/workspace/Seng330A2/Include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


