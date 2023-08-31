#include "main.h"
/**
 *
 *
 *
 *
 *
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		_strlen_recursion(s + 1);
		_putchar(*s);
	}
}
