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
	int i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
