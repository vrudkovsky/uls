#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    unsigned char *ptr = (unsigned char *)b;

    for (size_t i = 0; i < len; i++)
        ptr[i] = (unsigned char)c;
    return b;
}


// int main () {
//    char str[40];
//    strcpy(str,"This is string.h library function");
//    puts(str);
//    mx_memset(str,'$',7);
//    puts(str);
//    return(0);
// }
