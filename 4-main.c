#include <stdio.h>
#include <stdlib.h>
#include "dlist.h"

int main(int argc, char *argv[])
{
    dlist_t *head = NULL;
    int i, rot;

    if (argc < 3)
    {
        printf("Usage: %s <rotation> <list of integers>\n", argv[0]);
        return 1;
    }

    rot = atoi(argv[1]);

    for (i = 2; i < argc; i++)
        add_dnode_end(&head, atoi(argv[i]));

    printf("Original list:\n");
    print_dlist(head);

    rotate_List(&head, rot);

    printf("Rotated list:\n");
    print_dlist(head);

    free_dlist(head);
    return 0;
}
