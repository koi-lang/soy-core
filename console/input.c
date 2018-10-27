#include <stdio.h>

char* input(char text[], int length) {
    printf("%s", text);

    static char str[1024];
    fgets(str, length + 1, stdin);

    return str;
}