#include "main.h"

/**
 * main - Entry point. Builds a sorted linked list from arguments.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    node_t *sorted_head = NULL;
    int i, num;

    if (argc < 2)
    {
        printf("Usage: %s num1 num2 ...\n", argv[0]);
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
