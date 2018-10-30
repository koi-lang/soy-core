#include <stdio.h>

#ifndef PRINT_EXISTS
void print(char* arg) {
    printf("%s", arg);
}
#define PRINT_EXISTS
#endif