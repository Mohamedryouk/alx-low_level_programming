#include "main.h"
/**
 *
 *main- main func
 *Return: returns 0
 */
int _isupper(int c)
{

	if (c > 'A' && c < 'Z')
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
