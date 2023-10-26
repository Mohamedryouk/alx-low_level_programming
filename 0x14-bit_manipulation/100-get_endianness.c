#include "main.h"
/**
 * get_endianness- prints the endiann
 * @void: nothing
 * Return: return the endianness
 */
int get_endianness(void)
{
	unsigned int i = 0;

	char *ptr = (char *) &i;

	return (*ptr);
}
