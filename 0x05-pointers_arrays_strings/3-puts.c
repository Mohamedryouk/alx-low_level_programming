#include "main.h"
/**
 *_puts- prints string followed by new line
 *@str: the string
 */
void _puts(char *str)
{
	int len;

	while (*str != '\0')
	{
		len++;
		str++;
		_putchar(*str);
	}
	_putchar('\n');
}

