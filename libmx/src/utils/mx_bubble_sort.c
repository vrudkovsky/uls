#include "libmx.h"

int mx_bubble_sort(char **arr,int size) {

    int i;
    int j;
    char* temp;
    int counter = 0;
    int cmp;

    for(i = 0; i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
            cmp = mx_strcmp(arr[j], arr[j + 1]);
            if(cmp > 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                counter++;
            }
        }
    }

    return counter;
}

// int main() {
//     char *arr[] = {"abc", "acb", "a"};
//     int a = mx_bubble_sort(arr, 3);
//     printf("%d\n", a);
//     return 0;
// }
