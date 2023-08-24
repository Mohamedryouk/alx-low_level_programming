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
	int j = 0;

	while (src[i++])
		j++;
	for (i = 0; src[i]  && i < n; i++)
	{
		src[i] = dest[i];
	}
	for (i = j; i < n; i++)
		dest[i] = '\0';
}
