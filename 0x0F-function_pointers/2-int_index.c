#include "function_pointers.h"
/**
 * int_index- index func
 * @array: the array 
 * @size: the size of array
 * @cmp: the compare func
 * Return: the number index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (1);
			i++;
		}
	return (-1);
}


