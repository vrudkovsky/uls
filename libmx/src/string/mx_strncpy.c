#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    int i;

    for (i = 0; i < len && src[i] != '\0'; i++)
          dst[i] = src[i];
    for ( ; i < len; i++)
          dst[i] = '\0';

    return dst;
}

// int main() {
//     char *arr = mx_strnew(6);
//     char *dst = arr;
//     char *src = "123456";
//     mx_strncpy(dst, src, 6);
//     printf("%s", dst);
//     return 0;
// }
