#include <stdio.h>
#include "search_algos.h"
/**
 * interpolation_search - algorithm search
 * @array: array of elements
 * @size: size of the array
 * @value: value to be searched
 * Return: return value after search
 **/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (array[low] == array[high])
		{
			if (array[low] == value)
				return (low);
			else
				return (-1);
		}

		pos = low + (((double)(high - low) / (array[high] - array[low])) *
(value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", (unsigned long)pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
