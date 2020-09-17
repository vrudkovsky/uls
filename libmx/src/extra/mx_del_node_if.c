#include "../../inc/libmx.h"

void
mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b)) {
    t_list *act;
    t_list *next;

    if (*list && list) {
        act = *list;
        while (act) {
            if (cmp((void *)act, del_data) == true) {
                next = act->next;
                free(act);
                act = next;
            }
            *list = NULL;
        }
    }
}
