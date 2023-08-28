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
	int i = 0;
	while (i < n)
	{
		if (s[n] % 10)
		{
			_putchar(b);
		}
		i++;
	}
	return (s);
}


