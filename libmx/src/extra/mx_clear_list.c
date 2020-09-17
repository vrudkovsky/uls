#include "../../inc/libmx.h"

void mx_clear_list(t_list **list) {
    if (*list && list) {
        t_list *act = *list;
        t_list *next = NULL;

        while (act) {
            next = act->next;
            free(act);
            act = next;
        }
        *list = NULL;
    }
}
