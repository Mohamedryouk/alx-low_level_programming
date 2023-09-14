#include "variadic_functions.h"
/**
 *sum_them_all- function to return sum of all numbers
 *
 *@n: list of num arg
 *
 *Return: returns sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
