#include "main.h"
/**
 *_puts- prints string followed by new line
 *@str: the string
 */
void _puts(char *str)
{
	for (*str = 0; *str != '\0'; *str++)
	{
		_putchar(*str);
		*str--;
	}
	_putchar('\n');
}

