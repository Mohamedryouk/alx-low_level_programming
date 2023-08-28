#include "main.c"
/**
 * _strspn - function
 *
 *@s:
 *
 *@accept:
 *
 *Return: returns value
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
			}
			else if (accept[j] == '\0')
			{
				return (i);
			}
		}
		*s++;
	}
	return (0);
}

