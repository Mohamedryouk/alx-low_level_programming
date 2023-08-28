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
	int i = 0;
	int p;

	for (; n > 0; i++)
	{
		src[n] = dest[n];
		n--;
	}
	return (dest);
}
