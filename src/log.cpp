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
//    if(numberOfLogs){
//
//        if(numberOfLogs<MAX_LOG){
//            add(numberOfLogs, type, message);
//            numberOfLogs++;
//        }
//        else{
//
//            for(int a=numberOfLogs-1; a>=0; a-=1){
//                log[a]=log[a-1];
//            }
//             add(0, type, message);
//        }
//
//    }
//    else{
//        add(numberOfLogs, type, message);
//        numberOfLogs++;
//    }

    for(int a=numberOfLogs-1; a>=0; a-=1){
        log[a]=log[a-1];
    }
    add(0, type, message);
    numberOfLogs++;

}


int Log::getNumberOfLogs(){
    return numberOfLogs;
}

LOG Log::getLog(int index){
    return log[index];
}

void Log::printAll(){
    for(int a=0; a<numberOfLogs-1; a++){
        printf("%s : %s \n", log[a].logTypeStr, log[a].msg);
    }

}

