#include "main.h"
/**
 *create_array- function array
 *@size: look for the size of array of chars
 *@c: assginig the number of chars in thenarray to c
 *Return: return type to return the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);
	int i;

	if (arr == NULL)
	{
		printf("memory allocation failed\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[size] = c;
	}
	return (arr);
}
