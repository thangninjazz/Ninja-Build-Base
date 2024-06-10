#include "logger/LoggerFactory.h"
#include "calculator/BinaryCalculator.h"
#include <iostream>

int main() {
    logger::LoggerFactory loggerFactory;
    logger::Logger* logger = loggerFactory.getLogger(0); // 0 cho ConsoleLogger, 1 cho FileLogger
    logger->logText("Starting application");

    calculator::BinaryCalculator calc;
    int result = calc.sub(10, 5);
    long power = calc.getPower(10, 2);

    logger->logText("Subtraction Result: " + std::to_string(result));
    logger->logText("Power Result: " + std::to_string(power));

    return 0;
}
