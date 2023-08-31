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
	if (*s == '\0')
		return;
	_puts_recursion(s+1);
	_putchar(*s);
	_putchar('\n');
}
