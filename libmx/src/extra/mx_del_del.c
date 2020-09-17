#include "../../inc/libmx.h"

void mx_del_del(char **s1, char **s2) {
    mx_del_strarr(&s2);
    mx_del_strarr(&s1);
}
