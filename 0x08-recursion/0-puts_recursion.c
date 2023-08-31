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
	char i;
	for(; *s < '\0'; *s++)
	{
		if (*s == '\0')
			return;
		_putchar(*s);
	}
	_putchar('\n');
}
