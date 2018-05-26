#include "AnalogPinSensor.h"

using namespace wlp;

AnalogPinSensor::AnalogPinSensor(Board::AnalogPin analog_pin)
    : analog_pin(analog_pin) {}

double AnalogPinSensor::read_voltage() {
    return analog_pin.sample() * VOLTAGE_SCALE;
}

void AnalogPinSensor::begin() {
    analog_pin.powerup();
}

void AnalogPinSensor::sleep() {
    analog_pin.powerdown();
}