#include "../../inc/libmx.h"

bool mx_is_odd(int value) {
    if (value % 2 != 0)
        return true;
    else
        return false;
}
