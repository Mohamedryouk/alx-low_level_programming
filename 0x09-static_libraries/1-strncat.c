#include "main.h"
/**
 * _strncat - concatenate function
 *
 *@dest: destination
 *@src: source
 *@n: var
 *Return: pointer to result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}

