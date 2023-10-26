#include "main.h"
/**
 * get_bit - returns the value of a bit at given index
 * @n: storing the given index values here
 * @index: the index of the values
 * Return: return -1 if error accured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n)n* 8)
		return (-1);
	return ((n >> index) & 1);
}
