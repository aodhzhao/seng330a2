################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Seng330A2.cpp 

OBJS += \
./Seng330A2.o 

CPP_DEPS += \
./Seng330A2.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/Users/aodhzhao/Documents/workspace/Seng330A2/gtest_src" -I"/Users/aodhzhao/Documents/workspace/Seng330A2/Include" -I"/Users/aodhzhao/Documents/workspace/Seng330A2/src" -I"/Users/aodhzhao/Documents/workspace/Seng330A2/Tests" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


