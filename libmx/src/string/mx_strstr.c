#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    char *temphaystack = (char *)haystack;
    char *tempneedle = (char *)needle;
    
    if ((!haystack) || (!needle))
        return NULL;
    if (!mx_strlen(needle))
        return temphaystack;
    while (*temphaystack) {
        if (!mx_strncmp(temphaystack, tempneedle, mx_strlen(tempneedle)))
            return temphaystack;
        temphaystack++;
    }
    return NULL;
}


// int main () {
//    char haystack[20] = "TutorialsPoint";
//    char needle[10] = "Point";
//    char *ret;

//    ret = mx_strstr(haystack, needle);

//    printf("The substring is: %s\n", ret);

//    return(0);
// }
