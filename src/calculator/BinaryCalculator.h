#ifndef BINARYCALCULATOR_H
#define BINARYCALCULATOR_H

#include "Calculator.h"

namespace calculator {

class BinaryCalculator : public Calculator {
public:
    int shift(int a) override {
        return a << 1;
    }

    long getPower(int a, int b) {
        return pow(a, b);
    }
};

} // namespace calculator

#endif // BINARYCALCULATOR_H
