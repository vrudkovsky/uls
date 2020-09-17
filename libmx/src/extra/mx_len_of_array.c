#include "../../inc/libmx.h"

int mx_len_of_array(char **arr) {
    int i = 0;
    int j = 0;

    while (arr[i]) {
        while (arr[j])
            j++;
        i++;
    }
    return i;
}
