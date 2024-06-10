#ifndef FILELOGGER_H
#define FILELOGGER_H

#include "Logger.h"
#include <fstream>
#include <iostream>

namespace logger {

class FileLogger : public Logger {
private:
    static FileLogger* instance;
    std::ofstream logFile;
    FileLogger() {
        logFile.open("log.txt", std::ios::app);
    }

public:
    static FileLogger* getInstance() {
        if (!instance) {
            instance = new FileLogger();
        }
        return instance;
    }

    void logText(const std::string& txt) override {
        if (logFile.is_open()) {
            logFile << "FileLogger: " << txt << std::endl;
        }
    }

    ~FileLogger() {
        if (logFile.is_open()) {
            logFile.close();
        }
    }
};

FileLogger* FileLogger::instance = nullptr;

} // namespace logger

#endif // FILELOGGER_H
