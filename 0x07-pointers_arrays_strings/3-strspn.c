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
	int j = 0;

	if ((s == NULL) || (accept == NULL))
		return (i);
	while (s[j] != '\0')
	{
		int f = 0;

		while (*accept++ != '\0')
		{
			if (*s == *accept)
				i++;
			f++;
		}
		j++;
	}
	return (i);
}

