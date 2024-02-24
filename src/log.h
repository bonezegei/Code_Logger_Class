/*
    Author: (Bonezegei) Jofel Batutay
    Date: February 2024
    Purpose: Simple Log Class
*/

#ifndef __LOG_H_INCLUDED__
#define __LOG_H_INCLUDED__

#include <stdio.h>
#define MAX_LOG         128
#define MAX_LOG_STRING  128

enum LogType{ Unknown=0, Warning, Error, Success };

typedef struct {
    unsigned int timestamp;
    LogType      logType;
    char         logTypeStr[32];
    char         msg[MAX_LOG_STRING];
}LOG;

class Log{
public:
    Log();

    void add(int index, LogType type, const char *message);
    void add(LogType type, const char *message);

    int  getNumberOfLogs();
    LOG  getLog(int index);
    void printAll();

private:
    const char *LogTypeStr[4]={"Unknown", "Warning", "Error", "Success"};

    int numberOfLogs;
    LOG log[MAX_LOG];
};

#endif
