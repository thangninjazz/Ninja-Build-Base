#ifndef CONSOLELOGGER_H
#define CONSOLELOGGER_H

#include "Logger.h"
#include <iostream>

namespace logger {

class ConsoleLogger : public Logger {
private:
    static ConsoleLogger* instance;
    ConsoleLogger() {}

public:
    static ConsoleLogger* getInstance() {
        if (!instance) {
            instance = new ConsoleLogger();
        }
        return instance;
    }

    void logText(const std::string& txt) override {
        std::cout << "ConsoleLogger: " << txt << std::endl;
    }
};

ConsoleLogger* ConsoleLogger::instance = nullptr;

} // namespace logger

#endif // CONSOLELOGGER_H
