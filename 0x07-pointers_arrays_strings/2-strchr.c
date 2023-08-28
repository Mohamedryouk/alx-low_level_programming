#include "main.h"
/**
 * _strchr - searching func
 *
 *@s: pointer
 *
 *@c: char returning
 *
 *Return: return to pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (s[i] != '\0')
			c[i] = s[i];
		else if (s[i] == '\0')
			return (NULL);
	}
}
