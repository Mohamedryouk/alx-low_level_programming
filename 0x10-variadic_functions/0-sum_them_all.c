#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all- function to return sum of all num
 *
 *@n: list of num arg
 *
 *Return: returns sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, sum = 0;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		sum = va_arg(p, int);
		if (n == 0)
			return (0);
	}

	va_end(p);

	return (sum);
}
