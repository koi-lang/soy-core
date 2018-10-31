#include <stdlib.h>

#ifndef DIE_EXISTS
void die() {
    exit(0);
}
#define DIE_EXISTS
#endif