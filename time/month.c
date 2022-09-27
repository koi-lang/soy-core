#include <stdio.h>
#include <time.h>

#ifndef MONTH_EXISTS
char* month() {
    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    static char buffer[12];

    sprintf(buffer, "%02d", timeinfo->tm_mon);

    return buffer;
}
#define MONTH_EXISTS
#endif