#include "../../inc/libmx.h"

void mx_swap_int_el(int **s1, int **s2) {
    int *tmp;

    tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}
