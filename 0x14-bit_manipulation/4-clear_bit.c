#include "main.h"
/**
 * clear_bit- clears bit to 0
 * @n: pointer to series of chars
 * @index: index of agiven value
 * Return: return 1 if succeeded -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
