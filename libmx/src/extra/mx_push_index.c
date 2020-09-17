#include "../../inc/libmx.h"

void mx_push_index(t_list **list, void *data, int index) {
    t_list *new_node = *list;
    int new_index = 0;

    if (index < 1)
        mx_push_front(&new_node,data);
    while (new_node) {
        if (new_index == index - 1) {
            t_list *xch = mx_create_node(data);
            xch->next = new_node->next;
            new_node->next = xch;
            new_index++;
        }
        else {
            new_node = new_node->next;
            new_index++;
        }
    }
    if (new_index < index)
        mx_push_back(&new_node,data);
}
