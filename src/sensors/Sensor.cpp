#include <Cosa/Types.h>

#include "Sensor.h"

using namespace wlp;

void Sensor::value_read(double value) {
    UNUSED(value);
}

double Sensor::read() {
    double value = read_value();
    value_read(value);
    return value;
}
