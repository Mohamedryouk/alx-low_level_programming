#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all- function to return sum of all numbers
 *
 *@n: list of num arg
 *
 *return: returns sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(aps)
;
	return (sum);
}
