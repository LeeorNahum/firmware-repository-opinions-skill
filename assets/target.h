// hardware/target_name/target_name.h
#ifndef PROJECT_TARGET_NAME_H
#define PROJECT_TARGET_NAME_H

#include <stdint.h>

// I2C pins
static const uint8_t SDA_PIN = 0; // set for your board
static const uint8_t SCL_PIN = 0; // set for your board

// Interrupts and alerts
static const uint8_t BUTTON_INT_PIN = 0; // set for your board

// I2C addresses
static const uint8_t DEVICE_I2C_ADDRESS = 0x00; // set for your device

// Hardware selection macros: define the drivers this board uses
// #define DISPLAY_DRIVER_NAME
// #define IMU_DRIVER_NAME

#endif // PROJECT_TARGET_NAME_H
