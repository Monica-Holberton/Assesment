#include "dlist.h" /* ← This should fix your error */

int main(int argc, char *argv[])
{
    dlist_t *head = NULL;
    int i;

    if (argc < 2)
    {
        printf("Middle\n");
        return (1);
    }

    for (i = 1; i < argc; i++)
        add_dnode_end(&head, atoi(argv[i]));

    print_Middle(head);
    free_dlist(head);
    return (0);
}