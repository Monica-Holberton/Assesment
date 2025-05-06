#include <stdio.h>

/* Function prototype */
int count_elements(int *arr, int size);

int main(void)
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    int result = count_elements(array, size);
    printf("Number of elements: %d\n", result);

    return 0;
}
