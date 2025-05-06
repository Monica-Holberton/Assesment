#include "dlist.h"

/* Add node at the end of a doubly linked list */
dlist_t *add_dnode_end(dlist_t **head, int n)
{
    dlist_t *new = malloc(sizeof(dlist_t)), *temp;

    if (!new)
        return (NULL);
    new->n = n;
    new->next = NULL;

    if (!*head)
    {
        new->prev = NULL;
        *head = new;
    }
    else
    {
        temp = *head;
        while (temp->next)
            temp = temp->next;
        temp->next = new;
        new->prev = temp;
    }

    return (new);
}

/* Print middle node */
void print_Middle(dlist_t *head)
{
    dlist_t *even = head, *odd = head;

    if (!head)
    {
        printf("List is empty\n");
        return;
    }

    while (odd && odd->next)
    {
        odd = odd->next->next;
        if (odd)
            even = even->next;
    }

    /* Check if list has even number of nodes */
    if (odd == NULL)
        printf("Even Can't find middle\n");
    else
        printf("Middle: %d\n", even->n);
}
void free_dlist(dlist_t *head)
{
    dlist_t *temp;

    while (head)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}
