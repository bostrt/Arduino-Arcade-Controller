################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Arcade.cpp \
../Button.cpp \
../ButtonPad.cpp \
../Joystick.cpp \
../JoystickDirection.cpp 

OBJS += \
./Arcade.o \
./Button.o \
./ButtonPad.o \
./Joystick.o \
./JoystickDirection.o 

CPP_DEPS += \
./Arcade.d \
./Button.d \
./ButtonPad.d \
./Joystick.d \
./JoystickDirection.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/home/robert/arduino-1.0/hardware/arduino/cores/arduino" -I"/home/robert/arduino-1.0/hardware/arduino/variants/standard" -I"/home/robert/workspace/Arcade" -I"/home/robert/arduino-1.0/libraries/SoftwareSerial" -D__IN_ECLIPSE__=1 -DARDUINO=100 -Wall -Os -ffunction-sections -fdata-sections -fno-exceptions -g -mmcu=atmega328p -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" -x c++ "$<"
	@echo 'Finished building: $<'
	@echo ' '


