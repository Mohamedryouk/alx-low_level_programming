#include <stdio.h>
#include "main.h"
/**
 *print_rev: reverse string
 *@s: variable
 */
void print_rev(char *s)
{
	int len;

	len;
	while (*s != '\0')
	{
		_putchar(*s);
		len++;
		s++;
	}
	_putchar('\n');
}
