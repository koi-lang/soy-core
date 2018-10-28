#include <stdlib.h>

int str_to_int(char string[]) {
    return strtol(string, NULL, 10);
}