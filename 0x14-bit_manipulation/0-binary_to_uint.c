#include "main.h"
/**
 * binary_to_uint- converts binary to unsigned integer
 * @b: pointer points to a series of chars of 1 and 0
 * Return: returns the converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int add_up = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b == '1')
		{
			add_up = (add_up << 1) | 1;
		}
		else if (*b == '0')
		{
			add_up = (add_up << 1);
		}
		else if (*b != '1' || *b != '0')
		{
			return (0);
		}
		b++;
	}
	return (add_up);
}
