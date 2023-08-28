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
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
