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

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
