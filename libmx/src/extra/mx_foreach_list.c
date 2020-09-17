#include "../../inc/libmx.h"

void mx_foreach_list(t_list *list, void (*f)(t_list *node)) {
    while (list) {
        f(list);
        list->next = list;
    }
}
