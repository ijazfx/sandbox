/* 
 * File:   f_stack.h
 * Author: fijaz
 *
 * Created on September 27, 2013, 11:05 AM
 */

#ifndef F_STACK_H
#define	F_STACK_H

#ifdef	__cplusplus
extern "C" {
#endif

    typedef struct {
        int *data;
        int size;
        int current;
    } f_stack_t;

    f_stack_t * create_stack(int size);
    int push(f_stack_t *s, int value);
    int pop(f_stack_t *s, int *value);
    int is_stack_full(f_stack_t *s);
    int is_stack_empty(f_stack_t *s);
    void delete_stack(f_stack_t *s);

#ifdef	__cplusplus
}
#endif

#endif	/* F_STACK_H */

