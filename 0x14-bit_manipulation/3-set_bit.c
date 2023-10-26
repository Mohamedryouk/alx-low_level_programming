#include "main.h"
/**
 * set_bit- sets the given value at index to 1
 * @n: pointer to series of chars
 * @index: index of a given value
 * Return: 1 if work, -1 of error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
