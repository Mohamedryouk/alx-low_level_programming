#include "main.h"

/**
 *main- mainfunc
 *Return: 0
 *function describe if the param is upper case or not
 *@c: is a variable that we want to find if its upper case
 */
int _isupper/*uppercase*/(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
