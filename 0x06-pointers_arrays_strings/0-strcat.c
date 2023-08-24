#include <string.h>
#include "main.h"
/**
 * _strcat - concatenate
 *@dest: var
 *@src: var
 *
 *Return: returns char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
}

