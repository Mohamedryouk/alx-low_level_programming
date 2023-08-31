#include "main.h"
/**
 *_puts_recursion - func
 *
 *@s: pointer to char
 *
 *Return: return void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
