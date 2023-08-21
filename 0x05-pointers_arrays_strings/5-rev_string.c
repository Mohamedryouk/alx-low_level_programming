#include "main.h"
/**
 *rev_string- reverse string output
 *@s: pointer
 *Return: always 0
 */
void rev_string(char *s)
{
	int len, i;
	int j = 0;

	for (i = 0; s[i] != 0; i++);
	for (len = 0; len < i / 2; len++)
	{
		j = s[len];
		s[len] = s[i];
		s[i - 1 - len] = j;
	}
	for (j = 0; j < i ; j++)
		_putchar(s[i]);
	_putchar('\n');
}
