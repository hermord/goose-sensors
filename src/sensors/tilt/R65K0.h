#ifndef GOOSE_SENSORS_R65K0_H
#define GOOSE_SENSORS_R65K0_H

#include "../AnalogPinSensor.h"

namespace wlp {
    class R65K0: public AnalogPinSensor {
    public:
        explicit R65K0(Board::AnalogPin analog_pin)
        : AnalogPinSensor(analog_pin) {};
    protected:
        virtual double read_value() override;
    };
}

#endif //GOOSE_SENSORS_R65K0_H