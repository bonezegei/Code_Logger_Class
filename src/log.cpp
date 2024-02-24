/*
    Author: (Bonezegei) Jofel Batutay
    Date: February 2024
    Purpose: Simple Log Class
*/

#include "log.h"

Log::Log(){
    numberOfLogs=0;
}

void Log::add(int index, LogType type, const char *message){
    log[index].logType=type;
    sprintf(log[index].msg,"%s",message);
    sprintf(log[index].logTypeStr,"%s",LogTypeStr[type]);
}

void :Log::add(LogType type, const char *message){
    if(numberOfLogs){

        if(numberOfLogs<MAX_LOG){
            add(numberOfLogs, type, message);
            numberOfLogs++;
        }
        else{
          //Push Back and Shift Here
        }
    }
    else{
        add(numberOfLogs, type, message);
        numberOfLogs++;
    }
}


int Log::getNumberOfLogs(){
    return numberOfLogs;
}

LOG Log::getLog(int index){
    return log[index];
}
