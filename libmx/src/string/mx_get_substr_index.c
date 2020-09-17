#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int i = 0;
    int j = 0;

    if ((!sub || !str)) 
        return -2;
        
    while (str) {
        j = i;
        while (str[j] == sub[j - i]) {
            if (sub[j - i + 1] == 0) return i;
            j++;
        }
        i++;
    }
    return -1;
}

// int main () {
//    char str[20] = "TutPorialsPoint";
//    char sub[10] = "Ppp";
//    int ret;

//    ret = mx_get_substr_index("McDonalds", NULL);

//    printf("The substring is: %d\n", ret);

//    return(0);
// }
