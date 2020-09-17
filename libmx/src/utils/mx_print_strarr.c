#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    if (arr && delim) {
        for (int i = 0; arr[i] != NULL; i++) {
            if (i != 0)
                mx_printstr(delim);
            mx_printstr(arr[i]);
        }
        mx_printstr("\n");
    }
}

// int main() {
//     const char *delim = "----";
//     char *arr[2] = {"Hello", "world!", "How are you?", NULL};
//     mx_print_strarr(arr, delim);
//     return 0;
// }
