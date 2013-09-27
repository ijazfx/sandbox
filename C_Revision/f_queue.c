#include <stdlib.h>

#include "f_queue.h"

f_queue_t *create_queue(int size) {
    f_queue_t *q = malloc(sizeof(f_queue_t));
    q->size = size;
    q->data = malloc(sizeof(int) * size);
    q->current = 0;
    return q;
}

int enque(f_queue_t *q, int value) {
    int i;
    if(!is_queue_full(q)) {
        q->data[q->current++] = value;
        return 1;
    }
    return 0;
}

int deque(f_queue_t *q, int *value) {
    int i;
    if(!is_queue_empty(q)) {
        *value = q->data[0];
        for(i = 0; i < q->current; i++) {
            q->data[i] = q->data[i+1];
        }
        q->current--;
        return 1;
    }
    return 0;
}

int is_queue_full(f_queue_t *q) {
    return q->current == q->size ? 1 : 0;
}

int is_queue_empty(f_queue_t *q) {
    return q->current == 0 ? 1 : 0;
}

void delete_queue(f_queue_t *q) {
    free(q);
}
