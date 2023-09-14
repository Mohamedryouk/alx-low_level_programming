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
	int i, sum;

	for (i = 0; i < count; i++)
	{
		if (i == 0)
			return (0);
		sum += va_arg(args, int);
	}
	return (sum);
}
