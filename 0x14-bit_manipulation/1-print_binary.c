#include "main.h"
/**
 * print_binary- prints the binary representation of number
 * @n: unsigned int of printed binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int start = 0;
	unsigned int bit;

	for (i = 31; i >= 0; i--)
	{
		bit = n >> i;
		if (bit & 1)
		{
			_putchar('1');
			start = 1;
		}
		else if (start)
		{
			_putchar('0');
		}
	}
	if (!start)
	{
		_putchar('0');
	}
}
