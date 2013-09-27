/* 
 * File:   f_queue.h
 * Author: fijaz
 *
 * Created on September 27, 2013, 1:08 PM
 */

#ifndef F_QUEUE_H
#define	F_QUEUE_H

#ifdef	__cplusplus
extern "C" {
#endif

    typedef struct {
        int *data;
        int size;
        int current;
    } f_queue_t;

    f_queue_t *create_queue(int size);
    int enque(f_queue_t *q, int value);
    int deque(f_queue_t *q, int *value);
    int is_queue_full(f_queue_t *q);
    int is_queue_empty(f_queue_t *q);
    void delete_queue(f_queue_t *q);

#ifdef	__cplusplus
}
#endif

#endif	/* F_QUEUE_H */

