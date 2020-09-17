#include "libmx.h"

int mx_get_char_index(const char *str, char c) {
    int i = 0;

    if (str == 0) 
        return -2;

    while (*str) {
        if (*str == c) 
            return i;
        i++;
        str++;
    }
    return -1;
}

// int main() {
//     char string[] = {"hello world"};
//     char c = 'z';
//     printf("%d", mx_get_char_index(string, c));
//     return 0;
// }
