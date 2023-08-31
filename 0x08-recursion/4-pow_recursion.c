#include "main.h"
/**
 * _pow_recursion - funcion name
 *
 *@x: num
 *@y: num2
 *Return: zero
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0 && x != 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
