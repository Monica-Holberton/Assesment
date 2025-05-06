#include <stdio.h>
#include <stdlib.h>
#include "dlist.h"

/**
 * rotate_List - Rotates a doubly linked list
 * @head: pointer to pointer to head of list
 * @rotations: number of rotations (positive = CW, negative = CCW)
 */
void rotate_List(dlist_t **head, int rotations)
{
    int len = 0, i;
    dlist_t *tail, *temp;

    if (!head || !*head || !(*head)->next)
        return;

    /* Count length */
    temp = *head;
    while (temp)
    {
        len++;
        tail = temp;
        temp = temp->next;
    }

    /* Normalize rotations */
    rotations = rotations % len;
    if (rotations < 0)
        rotations += len;

    for (i = 0; i < rotations; i++)
    {
        /* Detach last node */
        tail = *head;
        while (tail->next)
            tail = tail->next;

        if (tail->prev)
            tail->prev->next = NULL;

        tail->prev = NULL;
        tail->next = *head;
        (*head)->prev = tail;
        *head = tail;
    }
}
