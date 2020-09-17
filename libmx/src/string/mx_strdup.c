#include "libmx.h"

char *mx_strdup(const char *str) {
    char *strdup = mx_strnew(mx_strlen(str));
    mx_strcpy(strdup, str);
    return strdup;
}

// int main () {
//     char *string = {"Hello world!"};
//     char *dup = mx_strdup(string);
//     printf("%s\n", dup);
//     //free(dup);
//     //dup = NULL;
//     return 0;
// }
