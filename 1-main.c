#include "lists.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    list_t *head = NULL;
    int i;

    if (argc < 2)
    {
        printf("Usage: %s <list of integers>\n", argv[0]);
        return (1);
    }

    for (i = 1; i < argc; i++)
        add_node_end(&head, atoi(argv[i]));

    printf("Single Linked List Created Successfully!\n");

    print_list(head);
    free_list(head);

    return (0);
}
