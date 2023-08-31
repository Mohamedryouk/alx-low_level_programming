#include "main.h"
/**
 *is_prime_number
 *
 *@n: func num
 *
 *Return: zero
 */
int is_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
