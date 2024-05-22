#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - algorithm function
 * @array: array to be searched
 * @size: size of the array
 * @value: values included in the array
 * Return: return value at the end.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev = 0;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n
", (unsigned long)prev, array[prev]);
		if (prev + step >= size || array[prev + step] >= value)
			break;
		prev += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n
", (unsigned long)prev, (unsigned long)(prev + step));

	for (i = prev; i < size && i <= prev + step; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
