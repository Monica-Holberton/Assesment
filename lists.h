#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list node
 * @n: integer data
 * @next: pointer to the next node
 */
typedef struct list_s
{
    int n;
    struct list_s *next;
} list_t;

list_t *add_node_end(list_t **head, int n);
void print_list(const list_t *head);
void free_list(list_t *head);
list_t *insert_sorted(list_t **head, int n);


#endif /* LISTS_H */