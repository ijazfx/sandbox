/* 
 * File:   main.c
 * Author: fijaz
 *
 * Created on September 22, 2013, 8:29 PM
 */

#include <stdio.h>
#include "f_stack.h"
#include "f_queue.h"

int main(int argc, char** argv) {
    f_stack_t *s = create_stack(8);
    f_queue_t *q = create_queue(8);
    int i;
    for (i = 1; i <= 10; i++) {
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
    delete_stack(s);
    delete_queue(q);
}