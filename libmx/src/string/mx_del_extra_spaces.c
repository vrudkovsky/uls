#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {   
    char *strnew;
    char *res;
    int i = 0;
    int j = 0;

    strnew = mx_strtrim(str);
    while (strnew[i] != '\0') {
        if (mx_isspace(strnew[i])) {
            strnew[j] = ' ';
            j++;
            while (mx_isspace(strnew[i]))
                i++;
        }
        strnew[j++] = strnew[i++];
    }
    strnew[j] = '\0';
    res = mx_strnew(j);
    res = mx_strncpy(res, strnew, j + 1);
    mx_strdel(&strnew);
    return res;
}
