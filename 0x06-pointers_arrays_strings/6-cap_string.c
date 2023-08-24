#include "main.h"
/**
 *cap_string - func
 *
 *@n: num int
 *
 *Return: 0
 *
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
