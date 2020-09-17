#include "libmx.h"

void mx_strdel(char **str) {
    if (str) {
        free(*str);
        *str = NULL;
    }
}

// int main() {
//     char *str = "game over";
//     char *str_new;
//     str_new = mx_strnew(9);
//     mx_strdel(&str_new);
//     str_new = realloc(str_new, 10);
//     printf("%s\n", str);
//     return 0;
// }
