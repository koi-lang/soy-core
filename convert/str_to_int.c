#include <stdlib.h>

#ifndef STR_TO_INT_EXISTS
int str_to_int(char string[]) {
    return strtol(string, NULL, 10);
}
#define STR_TO_INT_EXISTS
#endif