#include "../../inc/libmx.h"

int mx_count_char(char *str, char c) {
    int count = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == c)
            count++;
    }
    return count;
}
