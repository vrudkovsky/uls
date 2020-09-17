#include "../../inc/libmx.h"

void mx_is_positive(int i) {
    if (i == 0)
        mx_printstr("zero");
    else if (i > 0)
        mx_printstr("positive");
    else
        mx_printstr("negative");
    mx_printstr("\n");
}
