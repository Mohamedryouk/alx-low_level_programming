#include "main.h"
#include <stdio.h>
/**
 *main- mainfunc
 *Return: 0
 */
int _isdigit(int c)
{
	for (c = 0 ; c <= 9 ; c++)
	{
		if (c == '0' && c == '9')
		{
			return (1);
		}
		else
		{
			return (0);
		};
	}
	_putchar('\n');
}
