#include <stdio.h>
#include <stdlib.h>

/* Node structure */
typedef struct node
{
    int data;
    struct node *next;
} node_t;

/* Create a new linked list node */
node_t *create_node(int value)
{
    node_t *new_node = malloc(sizeof(node_t));
    if (!new_node)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}

/* Insert a node into a sorted list */
void insert_sorted(node_t **sorted_head, int value)
{
    node_t *new_node = create_node(value);

    if (*sorted_head == NULL || value < (*sorted_head)->data)
    {
        new_node->next = *sorted_head;
        *sorted_head = new_node;
    }
    else
    {
        node_t *current = *sorted_head;
        while (current->next != NULL && current->next->data < value)
            current = current->next;

        new_node->next = current->next;
        current->next = new_node;
    }
}

/* Print the list */
void print_list(node_t *head)
{
    node_t *temp = head;
    while (temp)
    {
        printf("%d", temp->data);
        if (temp->next)
            printf(" -> ");
        temp = temp->next;
    }
    printf("\n");
}

/* Free the list */
void free_list(node_t *head)
{
    node_t *temp;
    while (head)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(int argc, char *argv[])
{
    node_t *sorted_head = NULL;
    int i, num;

    if (argc < 2)
    {
        printf("Usage: %s num1 num2 num3 ...\n", argv[0]);
        return 1;
    }

    for (i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);
        insert_sorted(&sorted_head, num);
    }

    printf("Sorted Linked List: ");
    print_list(sorted_head);

    free_list(sorted_head);
    return 0;
}
