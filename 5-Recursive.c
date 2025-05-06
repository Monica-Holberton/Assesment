#include <stdio.h>

/**
 * count_elements - Recursively counts the number of elements in an array
 * @arr: Pointer to the array
 * @size: Size of the array
 *
 * Return: Number of elements in the array
 */
int count_elements(int *arr, int size)
{
    if (size == 0)
        return 0;
    return 1 + count_elements(arr + 1, size - 1);
}
