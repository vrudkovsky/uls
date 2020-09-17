#include "../../inc/libmx.h"

int mx_lenght_of_digit(long n) {
    unsigned int len = 0;

    if (n < 0) {
        n *= -1;
        len++;
    }
    while (n > 0) {
        n /= 10;
        len++;
    }
    return len;
}
