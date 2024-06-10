#ifndef LOGGERFACTORY_H
#define LOGGERFACTORY_H

#include "Logger.h"
#include "ConsoleLogger.h"
#include "FileLogger.h"

namespace logger {

class LoggerFactory {
public:
    Logger* getLogger(int option) {
        if (option == 0) {
            return ConsoleLogger::getInstance();
        } else if (option == 1) {
            return FileLogger::getInstance();
        }
        return nullptr;
    }
};

} // namespace logger

#endif // LOGGERFACTORY_H
