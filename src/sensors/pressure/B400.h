#ifndef GOOSE_SENSORS_B400_H
#define GOOSE_SENSORS_B400_H

#include "../AnalogPinSensor.h"

namespace wlp {
    class B400: public AnalogPinSensor {
    public:
        explicit B400(Board::AnalogPin analog_pin)
        : AnalogPinSensor(analog_pin) {};
    protected:
        virtual double read_value() override;
    };
}

#endif //GOOSE_SENSORS_B400_H