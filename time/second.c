#include <stdio.h>
#include <time.h>

#ifndef SECOND_EXISTS
char* second() {
    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    static char buffer[12];

    sprintf(buffer, "%02d", timeinfo->tm_sec);

    return buffer;
}
#define SECOND_EXISTS
#endif