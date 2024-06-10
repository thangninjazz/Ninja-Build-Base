#ifndef LOGGER_H
#define LOGGER_H

#include <string>

namespace logger {

class Logger {
public:
    virtual ~Logger() {}
    virtual void logText(const std::string& txt) = 0;
};

} // namespace logger

#endif // LOGGER_H
