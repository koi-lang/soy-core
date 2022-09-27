#include <stdio.h>
#include <time.h>

#ifndef DATETIME_EXISTS
char* datetime() {
    time_t now;
    time(&now);

    char* str = ctime(&now);

    return str;
}
#define DATETIME_EXISTS
#endif
