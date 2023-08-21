#include <stdio.h>
#include "main.h"
/**
 *print_rev: reverse string
 *@s: variable
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		s++;
	}
	for (len -= 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
