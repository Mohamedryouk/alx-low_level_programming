#include "main.h"
/**
 * _strcat - concatenate
 *@dest: var
 *@src: var
 *@n: var
 *Return: returns char
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j] = src[i];
	return (dest);
}

