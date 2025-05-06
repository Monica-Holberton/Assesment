#include "lists.h"

/**
 * main - starting point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    list_t *unsorted = NULL, *sorted = NULL;
    int i;

    if (argc < 2)
    {
        printf("Usage: %s <list of integers>\n", argv[0]);
        return (1);
    }

    /* Build original list */
    for (i = 1; i < argc; i++)
        add_node_end(&unsorted, atoi(argv[i]));

    /* Build sorted list */
    for (i = 1; i < argc; i++)
        insert_sorted(&sorted, atoi(argv[i]));

    printf("Sorted Linked List:\n");
    print_list(sorted);

    free_list(unsorted);
    free_list(sorted);

    return (0);
}
