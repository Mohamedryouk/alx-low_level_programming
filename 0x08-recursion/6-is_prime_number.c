#include "main.h"
/**
 *is_prime_number
 *
 *@n: func num
 *
 *Return: zero
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

