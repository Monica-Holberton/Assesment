#include "lists.h"

/* Add node to the end of the list */
list_t *add_node_end(list_t **head, int n)
{
    list_t *new_node = malloc(sizeof(list_t));
    list_t *temp;

    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (!*head)
    {
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp->next)
            temp = temp->next;
        temp->next = new_node;
    }

    return (new_node);
}

/* Print all elements of the list */
void print_list(const list_t *head)
{
    while (head)
    {
        printf("%d\n", head->n);
        head = head->next;
    }
}

/* Free the entire list */
void free_list(list_t *head)
{
    list_t *temp;

    while (head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
