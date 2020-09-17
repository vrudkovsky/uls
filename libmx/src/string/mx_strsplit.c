#include "libmx.h"

char **mx_strsplit(const char *s, char c) {
    int wordscount;
    char **arrwords;
    int iterator = 0;
    
    if (s == NULL) 
        return NULL;

    wordscount = mx_count_words(s, c);
    arrwords = (char**)malloc((wordscount + 1) * sizeof(char*));
    arrwords[wordscount] = (char*)NULL;

    for (int i = 0, size = 0; i < wordscount; i++, size = 0) {
        while (s[iterator])
            if (s[iterator] == c) {
                iterator++;
            } 
            else {
                while (s[iterator] != c) {
                    size++;
                    iterator++;
                }
                break;
            }  

        arrwords[i] = mx_strnew(size);

        for (int z = 0; z < size; z++)
            arrwords[i][z] = s[iterator - size + z];
    }
    return (char**)arrwords;
}
