#include <stdio.h>
#include <time.h>

#ifndef DAY_EXISTS
char* day() {
    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    static char buffer[12];

    sprintf(buffer, "%02d", timeinfo->tm_day);

    return buffer;
}
#define DAY_EXISTS
#endif