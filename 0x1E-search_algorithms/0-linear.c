#include <stdio.h>

/**
 * linear_search - linear search algorithm function.
 * @array: pointer to first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: return value.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
