#ifndef CALCULATOR_H
#define CALCULATOR_H

namespace calculator {

class Calculator {
public:
    virtual int sub(int a, int b) {
        return a - b;
    }

    virtual int add(int a, int b) {
        return a + b;
    }

    virtual int mul(int a, int b) {
        return a * b;
    }

    virtual int shift(int a) {
        return a << 1;
    }

    virtual long pow(int a, int b) {
        long result = 1;
        for (int i = 0; i < b; ++i) {
            result *= a;
        }
        return result;
    }
};

} // namespace calculator

#endif // CALCULATOR_H
