#include <stdio.h>
#include "search_algos.h"
/**
 * print_subarray - printing the subarray after every search operation
 * @array: array to be searched
 * @x: left portion
 * @y: right portion
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
 * advanced_binary_recursive - recursive binary search in advnace manner.
 * @array: array to be searched recursevely
 * @left: left portion of the array after spliting it
 * @right: right portion of the array after analyzing the left portion.
 * @value: value to be searched and printed
 * Return: return value after searching.
*/
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
	{
		return (-1);
	}
	print_subarray(array, left, right);

	mid = left + (right - left) / 2;
	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
		{
			return (mid);
		}
		return (advanced_binary_recursive(array, left, mid, value));
	}
	else if (array[mid] < value)
	{
		return (advanced_binary_recursive(array, mid + 1, right, value));
	}
	else
	{
		return (advanced_binary_recursive(array, left, mid - 1, value));
	}
}
/**
 * advanced_binary - advanced binary search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value or key value to be searched
 * Return: return value.
*/
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = advanced_binary_recursive(array, 0, size - 1, value);
	if (array == NULL || size == 0)
		return (-1);

	return (index);
}
