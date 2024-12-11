#ifndef WEBLAND_SHARED_LOGGER_H
#define WEBLAND_SHARED_LOGGER_H

#include <print>
#include <string_view>

namespace webland_shared {
    enum class LogLevel {
        Info,
        Warning,
        Error,
        Critical
    };

    static std::string LogLevelName(LogLevel level) {
        switch (level) {
            case LogLevel::Info:
                return "INFO";
            case LogLevel::Warning:
                return "WARNING";
            case LogLevel::Error:
                return "ERROR";
            case LogLevel::Critical:
                return "CRITICAL";
        }
        return "unknown fix that";
    }

    static void LogMessage(LogLevel level, std::string_view message) {
        std::println("[{}] {}", LogLevelName(level), message);
    }
}

#endif
