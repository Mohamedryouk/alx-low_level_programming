#include "main.h"
/**
 *factorial - func
 *
 *@n: num
 *
 *Return: 1
 */
int factorial(int n)
{
	if (n < 1)
		return (1);
	else
		return (-1);
	return (n * factorial(n - 1));
}
