#include <stdio.h>
#include "main.h"
/**
 *print_rev: reverse string
 *@s: variable
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s+len) != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
