#include <stdio.h>
#include "main.h"
/**
 *print_rev: reverse string
 *@s: variable
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	_putchar('\n');
}
