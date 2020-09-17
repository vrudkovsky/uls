#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char* ss = (unsigned char*) s;
    for (size_t i = n-1; i >= 0; i--) {
        if(ss[i] == c) {
            return &ss[i];
        }
    }
    return 0;
}
