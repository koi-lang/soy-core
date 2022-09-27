#include <stdio.h>
#include <time.h>

#ifndef HOUR_EXISTS
char* hour() {
    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    static char buffer[12];

    sprintf(buffer, "%02d", timeinfo->tm_hour);

    return buffer;
}
#define HOUR_EXISTS
#endif