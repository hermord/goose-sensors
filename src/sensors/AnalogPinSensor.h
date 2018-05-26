#ifndef GOOSE_SENSORS_ANALOGPINSENSOR_H
#define GOOSE_SENSORS_ANALOGPINSENSOR_H

#include <Cosa/AnalogPin.hh>

#include "Sensor.h"

#define VOLTAGE_SCALE 0.0048828  // 0..1023 as returned by sample() -> 0..5 V

namespace wlp {
    class AnalogPinSensor: public Sensor {
    public:
        explicit AnalogPinSensor(Board::AnalogPin analog_pin);
        void begin();
        void sleep();
    protected:
        double read_voltage();
    private:
        AnalogPin analog_pin;
    };
}

#endif //GOOSE_SENSORS_ANALOGPINSENSOR_H