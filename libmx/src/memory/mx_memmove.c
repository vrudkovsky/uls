#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *dst_cpy = (unsigned char*) dst;
    unsigned char *src_cpy = (unsigned char*) src;
    unsigned char *tmp = malloc(len);

    for(size_t i = 0; i < len; i++)
        tmp[i] = src_cpy[i];
    for(size_t i = 0; i < len; i++)
        dst_cpy[i] = tmp[i];
        free(tmp);
    return dst_cpy;
}


// int main() {
//     char a[11] = "hello";
//     char *result = mx_memmove(a, &a[2], 3);
//     printf("%s\n", result);
// }

// int main() {
//     char a[10] = "hello";
//     char b[10];
//     char *result = mx_memmove(&b[2], a + 2, 5);
//     printf("%s\n", result);
// }
