#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct node - singly linked list node
 * @data: integer data
 * @next: pointer to the next node
 */
typedef struct node
{
    int data;
    struct node *next;
} node_t;

node_t *create_node(int value);
void insert_sorted(node_t **sorted_head, int value);
void print_list(node_t *head);
void free_list(node_t *head);

#endif /* MAIN_H */
