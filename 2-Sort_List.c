#include "lists.h"

/* Add node to end (for unsorted list) */
list_t *add_node_end(list_t **head, int n)
{
    list_t *new = malloc(sizeof(list_t)), *temp;

    if (!new)
        return (NULL);
    new->n = n;
    new->next = NULL;

    if (!*head)
        *head = new;
    else
    {
        temp = *head;
        while (temp->next)
            temp = temp->next;
        temp->next = new;
    }

    return (new);
}

/* Insert node into sorted list in order */
list_t *insert_sorted(list_t **head, int n)
{
    list_t *new = malloc(sizeof(list_t)), *curr = *head, *prev = NULL;

    if (!new)
        return (NULL);
    new->n = n;
    new->next = NULL;

    while (curr && n > curr->n)
    {
        prev = curr;
        curr = curr->next;
    }

    if (!prev)
    {
        new->next = *head;
        *head = new;
    }
    else
    {
        new->next = curr;
        prev->next = new;
    }

    return (new);
}

/* Print list */
void print_list(const list_t *head)
{
    while (head)
    {
        printf("%d\n", head->n);
        head = head->next;
    }
}

/* Free list */
void free_list(list_t *head)
{
    list_t *tmp;
    while (head)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
