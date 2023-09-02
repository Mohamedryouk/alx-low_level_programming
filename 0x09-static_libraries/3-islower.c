#include "main.h"
/**
 *_islower- function of lower key alphabet
 *main- main fuction to execute the code
 *@c: int
 *Return: 0
 */
int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
