#include "main.h"
/**
 *_strpbrk - funct
 *
 *@s: pointe
 *
 *@accept:
 *
 *Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
