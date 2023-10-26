#include "main.h"
/**
 * flip_bits- prints the number of flips to get another number
 * @n: n num
 * @m: num we need to flip to
 * Return: num of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip;
	unsigned int num_flip = 0;

	flip = n ^ m;
	while (flip)
	{
		num_flip += flip & 1;
		flip >>= 1;
	}
	return (num_flip);
}
