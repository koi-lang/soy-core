#include <stdio.h>
#include <time.h>

#ifndef YEAR_EXISTS
char* year() {
    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    static char buffer[12];

    sprintf(buffer, "%04d", timeinfo->tm_year);

    return buffer;
}
#define YEAR_EXISTS
#endif