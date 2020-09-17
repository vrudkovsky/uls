#include "libmx.h"

char *mx_strtrim(const char *str) {
    char *strend;
    int tail = 0;
    char *strtrim;

    if (!str)
        return NULL;
    
    strend = (char *)str + mx_strlen(str) - 1;

    while (*str && mx_isspace(*str)) {
        str++;
    }

    if (*str == 0)
        return mx_strnew(0);
 
    while ((strend > str) && mx_isspace(*strend)) {
        strend--;
        tail++;
    }

    strtrim = mx_strnew(mx_strlen(str) - tail);
    
    if (!(strtrim = mx_strncpy(strtrim, str, mx_strlen(str) - tail)))
        return NULL;  
    return strtrim;
}
