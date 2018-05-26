#ifndef GOOSE_SENSORS_SENSOR_H
#define GOOSE_SENSORS_SENSOR_H

namespace wlp {
    class Sensor {
    protected:
        virtual double read_value() = 0;
        virtual void value_read(double value);
    public:
        double read();
    };
}

#endif //GOOSE_SENSORS_SENSOR_H
