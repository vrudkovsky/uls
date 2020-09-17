#include "../../inc/libmx.h"

void mx_pop_index(t_list **list, int index) {
    t_list *new_node = *list;
    int new_index = 0;


    if (index < 1)
        mx_pop_front(&new_node);
    while (new_node) {
        if (new_index == index - 1) {
            free(new_node->next);
            new_node->next = new_node->next->next;
            new_index++;
        }
        else {
            new_node = new_node->next;
            new_index++;
        }
    }
    if (new_index < index)
        mx_pop_back(&new_node);
}
