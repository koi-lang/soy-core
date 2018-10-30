#include <stdio.h>

#ifndef PRINTLN_EXISTS
void println(char* arg) {
    printf("%s", arg);
    printf("\n");
}
#define PRINTLN_EXISTS
#endif
