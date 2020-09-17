#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    unsigned char * big_cpy = (unsigned char* ) big;
    unsigned char * little_cpy = (unsigned char* ) little;
    bool is_finded;

    for (size_t i = 0; i < big_len; i++) {
        is_finded = 1;
        for (size_t j = 0; j < little_len; j++) {
            if (i + j >= big_len) return 0;
            if (big_cpy[i+j] != little_cpy[j]) {
                is_finded = 0;
                break;
            }
        }
        if (is_finded == 1) return &big_cpy[i];
    }
    return 0;
}

// int main() {
//     void *result = NULL; 
//     char a[10] = "hello";
//     char b[3] = "he";
//     result = mx_memmem(a, 5, b, 2);
// }
