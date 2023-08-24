#include "main.h"
/**
 * _strncpy - fumctiom to copy string
 *
 *@dest: destination
 *@n: num
 *@src: source
 *Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0'  && i < n; i++)
	{
		src[i] = dest[i];
	}
	dest[i++] = '\0';
	return (dest);
}
