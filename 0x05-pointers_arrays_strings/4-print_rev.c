#include <stdio.h>
#include "main.h"
/**
 *print_rev: reverse string
 *@s: variable
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
