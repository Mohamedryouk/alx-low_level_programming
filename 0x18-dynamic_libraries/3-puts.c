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
		_putchar(*str);
		len++;
		str++;
	}
	_putchar('\n');
}

