#include "main.h"
/**
 * _memcpy - copy bytes from src to dest
 *
 *@dest: source
 *
 *@src: source
 *
 *@n: byte integer
 *
 *Return: return char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int p = 0;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
