#include "main.h"
/**
 *
 *
 *
 *
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	for (i = 0; i < 10; i++)
	{
		if ( s[i] < n)
		{
			_putchar('b');
			break;
		}
	}
	_putchar('\n');
}


