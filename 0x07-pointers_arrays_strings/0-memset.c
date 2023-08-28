#include "main.h"
/**
 * _memset - function to fill n byte by byte
 *@s: pointer points to the n
 *@b: char b that will be added to n
 *@n: unsigned integer
 *Return: returns a pointer from s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n < 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}


