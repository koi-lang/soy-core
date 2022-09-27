#include <stdio.h>
#include <time.h>

#ifndef MINUTE_EXISTS
char* minute() {
    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    static char buffer[12];

    sprintf(buffer, "%02d", timeinfo->tm_min);

    return buffer;
}
#define MINUTE_EXISTS
#endif