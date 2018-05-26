#include "B400.h"

using namespace wlp;

#define BAR_PER_VOLT 80 // 400 bar over 5 V

virtual double R65K0::read_value() override {
    return read_voltage() * BAR_PER_VOLT;
}