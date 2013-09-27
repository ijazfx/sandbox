#include <stdlib.h>

#include "f_stack.h"

f_stack_t * create_stack(int size) {
    f_stack_t *s = malloc(sizeof(f_stack_t));
    s->size = size;
    s->data = malloc(sizeof(int) * size);
    s->current = 0;
    return s;
}

int push(f_stack_t *s, int value) {
    if(!is_stack_full(s)) {
        s->data[s->current++] = value;
        return 1;
    }
    return 0;
}

int pop(f_stack_t *s, int *value) {
    if(!is_stack_empty(s)) {
        *value = s->data[--s->current];
        return 1;
    }
    return 0;
}

int is_stack_full(f_stack_t *s) {
    return s->current == s->size ? 1 : 0; 
}

int is_stack_empty(f_stack_t *s) {
    return s->current == 0 ? 1 : 0;
}

void delete_stack(f_stack_t *s) {
    free(s);
}
