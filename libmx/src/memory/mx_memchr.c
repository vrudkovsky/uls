#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    unsigned char* ss = (unsigned char* ) s;

    for (size_t i = 0; i < n; i++) {
        if (ss[i] == c) 
            return &ss[i];
    }
    return 0;
}

// int main() {
//     void *result = NULL; 
//     char a[10] = "hello";
//     result = mx_memchr(a, 'l', 5);
// }
