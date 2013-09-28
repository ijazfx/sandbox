/* 
 * File:   main.c
 * Author: fijaz
 *
 * Created on September 22, 2013, 8:29 PM
 */

#include <stdio.h>
#include "f_stack.h"
#include "f_queue.h"
#include "f_linked_list.h"

int main(int argc, char** argv) {
    f_stack_t *s = create_stack(8);
    f_queue_t *q = create_queue(8);
    f_node_t *first = NULL;
    f_node_t *current = NULL;
    int i, value;

    for (i = 0; i < 10; i++) {
        if (first == NULL) {
            first = create_linked_list(i);
        } else {
            add_node(first, i);
        }
        if (push(s, i)) {
            printf("%d pushed to stack\n", i);
        } else {
            printf("stack is full!\n");
        }
        if (enque(q, i)) {
            printf("%d added to queue\n", i);
        } else {
            printf("queue is full!\n");
        }
    }
    for (i = 1; i <= 10; i++) {
        int value;
        if (pop(s, &value)) {
            printf("%d popped from stack\n", value);
        } else {
            printf("stack is empty!\n");
        }
        if (deque(q, &value)) {
            printf("%d removed from queue\n", value);
        } else {
            printf("queue is empty!\n");
        }
    }
    remove_node(first, 3, &value);
    printf("%d is removed from the list\n", value);
    current = first;
    while (current != NULL) {
        printf("list item value is %d\n", current->value);
        current = current->next;
    }
    
    delete_stack(s);
    delete_queue(q);
    delete_linked_list(first);
}