#include <stdio.h>
#include <stdlib.h>

#include "f_linked_list.h"

f_node_t * create_linked_list(int value) {
    return add_node(NULL, value);
}

f_node_t * add_node(f_node_t *first, int value) {
    f_node_t *node = malloc(sizeof(f_node_t));
    node->value = value;
    node->next = NULL;
    f_node_t *current = first;
    if(current != NULL) {
        while(current->next != NULL) {
            current = current->next;
        }
        current->next = node;
    }
    return node;
}

int remove_node(f_node_t *first, int pos, int *value) {
    f_node_t *current = first;
    f_node_t *previous = NULL;
    int count = 0;
    while(count < pos && current != NULL) {
        count++;
        previous = current;
        current = current->next;
    }
    if(current != NULL) {
        previous->next = current->next;
        *value = current->value;
        free(current);
        return 1;
    }
    if(previous->next != NULL) {
        free(previous->next);
        *value = previous->next->value;
        previous->next = NULL;
        return 1;
    }
    return 0;
}

void delete_linked_list(f_node_t *first) {
    f_node_t *ptr = first;
    do {
        ptr = first;
        first = first->next;
        free(ptr);        
    } while(first != NULL);
}