#include "../../inc/libmx.h"

bool mx_is_digit_str(char *str) {
    for (int i = 0; str[i]; i++) {
        if (!mx_isdigit(str[i]))
            return false;
    }
    return true;
}
