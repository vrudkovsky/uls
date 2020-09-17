#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int i = 0;
    int j = 0;
    int count = 0;

    if (!str || !sub)  
        return -1;
    
    while (str[i]) {
        j = i;
    
        while (str[j] == sub[j - i]) {
            if (sub[j - i + 1] == '\0') 
                count++;
            if (str[j] == '\0')  
                return count;
            j++;
        }
        i++;
    }
    return count;
}

// int main () {
//    int ret;
//    char *str = "yo, yo, yo Neo";
//    char *sub = "yo";
   
//    ret = mx_count_substr(str, sub); //returns 3
//    //ret = mx_count_substr(str, NULL); //returns -1
//    //ret = mx_count_substr(NULL, sub); //returns -1

//    printf("The substring is: %d\n", ret);

//    return 0;
// }
