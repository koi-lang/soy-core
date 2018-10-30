#include <stdio.h>

#ifndef INPUT_EXISTS
char* input(char text[], int length) {
    printf("%s", text);

    static char str[1024];
    fgets(str, length + 1, stdin);

    return str;
}
#define INPUT_EXISTS
#endif