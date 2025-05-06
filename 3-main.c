#include "main.h"

int main(int argc, char *argv[])
{
    node_t *head = NULL;
    int i, num;

    if (argc < 2)
    {
        printf("The Middle List is %d\n", middle_list);
        return 1;
    }

    for (i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);
        append_node(&head, num);
    }

    printf("Doubly Linked List: ");
    print_list(head);

    print_Middle(head);

    free_list(head);
    return 0;
}
