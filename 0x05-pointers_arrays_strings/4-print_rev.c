#include <stdio.h>
#include "main.h"
/**
 *print_rev- reverse string
 *@s: variable
 */
void print_rev(char *s)
{
	int i, len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
