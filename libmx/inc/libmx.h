#ifndef LIBMX_H
#define LIBMX_H

#include <malloc/malloc.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

typedef struct s_list t_list;

struct s_list {
    void *data;
    struct s_list *next;
};

void mx_printchar(char c);
void mx_printspaces(int count);
int mx_len_of_array(char **arr);
int mx_count_char(char *str, char c);
int mx_strlen(const char *s);
void mx_printerr(char *str);
void mx_printstr(const char *s);
int mx_lenght_of_digit(long n);
bool mx_isspace(char c);
bool mx_is_char(char *s);
bool mx_is_odd(int value);
bool mx_isalpha(int c);
bool mx_isdigit(int c);
bool mx_is_digit_str(char *str);
int mx_atoi(const char *str);
void mx_is_positive(int i);
char *mx_del_extra_whitespaces(const char *str, char dlm);
void mx_print_unicode(wchar_t c);
void mx_print_strarr(char **arr, const char *delim);
void mx_printint(int n);
void mx_print_arr_int(const int *arr, int size);
double mx_pow(double n, unsigned int pow);
int mx_sqrt(int x);
void mx_swap_data(t_list *a, t_list *b);
int mx_strncmp(const char *s1, const char *s2, size_t n);
char *mx_nbr_to_hex(unsigned long nbr);
unsigned long mx_hex_to_nbr(const char *hex);
char *mx_itoa(int number);
void mx_swap(char **s1, char **s2);
void mx_swap_int(int *a, int *b);
void mx_swap_int_el(int **s1, int **s2);
void mx_foreach(int *arr, int size, void (*f)(int));
int mx_binary_search(char **arr, int size, const char *s, int *count);
int mx_bubble_sort(char **arr, int size);
int mx_quicksort(char **arr, int left, int right);
void mx_swap_char(char *s1, char *s2);
void mx_str_reverse(char *s);
void mx_strdel(char **str);
void mx_del_strarr(char ***arr);
void mx_del_del(char **s1, char **s2);
int mx_get_char_index(const char *str, char c);
char *mx_strdup(const char *s1);
char *mx_strndup(const char *s1, size_t n);
char *mx_strcpy(char *dst, const char *src);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcat(char *restrict s1, const char *restrict s2);
char *mx_strstr(const char *haystack, const char *needle);
int mx_get_substr_index(const char *str, const char *sub);
int mx_count_substr(const char *str, const char *sub);
int mx_count_words(const char *str, char c);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
char *mx_del_extra_spaces(const char *str);
char **mx_strsplit(const char *s, char c);
char *mx_strjoin(const char *s1, const char *s2);
char *mx_file_to_str(const char *file);
char *mx_replace_substr(const char *str, const char *sub, const char *replace);
void *mx_memset(void *b, int c, size_t len);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
int mx_memcmp(const void *s1, const void *s2, size_t n);
void *mx_memchr(const void *s, int c, size_t n);
void *mx_memrchr(const void *s, int c, size_t n);
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
void *mx_memmove(void *dst, const void *src, size_t len);
void *mx_realloc(void *ptr, size_t size);
t_list *mx_create_node(void *data);
void mx_clear_list(t_list **list);
void mx_swap_data(t_list *a, t_list *b);
void mx_push_front(t_list **list, void *data);
void mx_push_back(t_list **list, void *data);
void mx_push_index(t_list **list, void *data, int index);
void mx_pop_front(t_list **head);
void mx_pop_back(t_list **head);
void mx_pop_index(t_list **list, int index);
int mx_list_size(t_list *list);
void mx_foreach_list(t_list *list, void (*f)(t_list *node));
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *));
void
mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b));

#endif
