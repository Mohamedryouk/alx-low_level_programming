#include "search_algos.h"
#include <stdio.h>
/**
 * print_subarray - print array after every change.
 * @array: array to search in.
 * @x: size of the array.
 * @y: the value the value that needs to be found.
*/
void print_subarray(int *array, size_t x, size_t y)
{
	size_t i;

	printf("Searching in array: ");
	for (i = x; i <= y; i++)
	{
		printf("%d", array[i]);
		if (i < y)
		{
			printf(", ");
		}
	}
	printf("\n");
}
/**
 * binary_search - print array after every change.
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
size_t min(size_t a, size_t b)
{
    return (a < b ? a : b);
}
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t start;
    size_t end;

    if (array == NULL || size == 0)
    {
        return (-1);
    }
    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }
    start = bound / 2;
    end = min(bound, size - 1);
    printf("Value found between indexes [%lu] and [%lu]\n", start, end);
    return (binary_search(array + start, end - start + 1, value));
    
}