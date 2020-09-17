#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count){

    int left;
    int right;
    int middle;
    int cmp;

    left = 0;
    right = size - 1;

    while(left <= right){
        *count += 1;
        middle = (left + right)/2;
        cmp = mx_strcmp(arr[middle], s);
        if(cmp == 0)
            return middle;
        else if(cmp < 0)
            left = middle + 1;
        else
            right = middle - 1;
    }

    *count = 0;
      
    return -1;
}

// int main() {
//    char* arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//    int count = 0;

//    int x = mx_binary_search(arr, 6, "ab", &count);
//    printf("position of string in array: %d\n", x);
//    printf("Number of iterations: %d\n", count);
// }
