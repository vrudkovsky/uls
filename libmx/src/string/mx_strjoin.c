#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
	int i = 0;
	int j = 0;
	
	if (s1 == NULL)
		return mx_strdup(s2);
	if (s2 == NULL)
        return mx_strdup(s1);
	int len1 = mx_strlen(s1);
	int len2 = mx_strlen(s2);
	char* str = mx_strnew(len1 + len2);
    if (!str)
		return NULL;
	for (; s1[i] != '\0'; i++) {
		str[i] = s1[i];
	}
	for (; s2[j] != '\0'; j++) {
		str[i] = s2[j];
		i++;
	}
	return str;
}

// int main() {
//     char *str1 = "Hello ";
//     char *str2 = "world";
//     char *str3 = NULL;
//     printf("-%s\n\n", mx_strjoin(str1, str2));
//     printf("-%s\n", mx_strjoin(str1, str3));
//     return 0;
// }
