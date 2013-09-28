/* 
 * File:   f_linked_list.h
 * Author: fijaz
 *
 * Created on September 28, 2013, 12:54 AM
 */

#ifndef F_LINKED_LIST_H
#define	F_LINKED_LIST_H

#ifdef	__cplusplus
extern "C" {
#endif

    typedef struct f_node_t {
        int value;
        struct f_node_t *next;
    } f_node_t;

    f_node_t * create_linked_list(int value);
    f_node_t * add_node(f_node_t *current, int value);
    int remove_node(f_node_t *first, int pos, int *value);
    void delete_linked_list(f_node_t *first);
    
#ifdef	__cplusplus
}
#endif

#endif	/* F_LINKED_LIST_H */

