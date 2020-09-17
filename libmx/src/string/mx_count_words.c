#include "libmx.h"

int mx_count_words(const char *str, char c) {
    int i = 0;
    int count = 0;
    
    if (!str) return -1;
    
    while (str[i]) {
        while (str[i] == c) {
            i++;
            if (str[i] == '\0') return count;
        }
        count++;
        while (str[i] != c) {
            i++;
            if (str[i] == '\0') return count;
        }
    }
    return count;
}

// int main () {
//     int ret;
//     char *str = "  follow  *   the  white rabbit ";

//     //ret = mx_count_words(str, '*'); 
//     //ret = mx_count_words(str, ' ' );
//     ret = mx_count_words(NULL, ' ');

//     printf("The answer is: %d\n", ret);

//     return 0;
// }
