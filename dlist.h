#ifndef DLIST_H
#define DLIST_H 

/* DLIST_H */

#include <stdio.h>
#include <stdlib.h>

typedef struct dlist_s
{
    int n;
    struct dlist_s *prev;
    struct dlist_s *next;
} dlist_t;

dlist_t *add_dnode_end(dlist_t **head, int n);
void print_Middle(dlist_t *head);
void free_dlist(dlist_t *head);

#endif /* DLIST_H */