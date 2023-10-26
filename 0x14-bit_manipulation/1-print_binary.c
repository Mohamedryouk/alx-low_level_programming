#include "main.h"
/**
 * print_binary- prints the binary representation of number
 * @n: unsigned int of printed binary
 */ 
void print_binary(unsigned long int n)
{
	int i;
	unsigned int bit;
	for (i = 31; i >= 0; i--)
	{
		bit = n >> i;
		if (bit & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
