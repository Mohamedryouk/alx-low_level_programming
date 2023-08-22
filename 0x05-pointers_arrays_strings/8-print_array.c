#include "main.h"
/**
 * print_array - prints n elements
 *@a: var one
 *@n: var two
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			_putchar(a[i]);
	}
	_putchar('\n');
}
