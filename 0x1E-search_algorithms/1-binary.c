#include <stdio.h>
#include "search_algos.h"
/**
 * print_subarray - print array after every change.
 * @array: array to search in.
 * @size: size of the array.
 * @value: the value the value that needs to be found.
*/
void print_subarray(int *array, size_t x, size_t y) {
    size_t i;
    printf("Searching in array: ");
    for (i = x; i <= y; i++) {
        printf("%d", array[i]);
        if (i < y) {
            printf(", ");
        }
    }
    printf("\n");
}
/**
 * print_subarray - print array after every change.
 * @array: array to search in.
 * @size: size of the array.
 * @value: the value the value that needs to be found.
 * Return: the return value.
*/
int binary_search(int *array, size_t size, int value)
{
    size_t mid;
    size_t x = 0, y = size - 1;

    if (array == NULL)
        return (-1);

    while (x <= y)
    {
        print_subarray(array, x, y);
        mid = (x + y) / 2;
        if (value == array[mid])
            return (mid);
        else if (value < array[mid])
            y = mid - 1;
        else
            x = mid + 1;
    }
    return (-1);
}
