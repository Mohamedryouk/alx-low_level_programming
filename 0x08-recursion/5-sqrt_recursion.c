#include "main.h"
/**
 *_sqrt_recursion - function
 *
 *@n: number
 *
 *
 *Return: zero
 *
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
