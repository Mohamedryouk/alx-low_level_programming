#include "main.h"
/**
 *create_array- function array
 *@size: look for the size of array of chars
 *@c: assginig the number of chars in then array to c
 *Return: return type to return the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (0);
	while (size--)
		arr[size] = c;

	return (arr);
}
