// hardware/target_name/target_name.h
#ifndef PROJECT_TARGET_NAME_H
#define PROJECT_TARGET_NAME_H

#include <stdint.h>

// I2C pins
static const uint8_t SDA_PIN = 0; // set for your board
static const uint8_t SCL_PIN = 0; // set for your board

// Interrupts and alerts
static const uint8_t BUTTON_INT_PIN = 0; // set for your board

// I2C addresses, one per module on the bus
static const uint8_t MODULE_I2C_ADDRESS = 0x00; // set per module

// Hardware selection macros, named TYPE_NAME: the domain, then the specific part
// #define DISPLAY_<DRIVER>
// #define IMU_<DRIVER>

#endif // PROJECT_TARGET_NAME_H
