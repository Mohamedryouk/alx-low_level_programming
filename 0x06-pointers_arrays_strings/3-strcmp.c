#include "main.h"
/**
 * _strcmp - compares
 *@s1: string 1
 *@s2: string 2
 *Return: returns 1 or 0 if true or false
 */
int _strcmp(char *s1, char *s2)
{
	int flg = 0;
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			flg = 1;
			break;
		}
		i++;
	}
	if (flg == 0)
		return (0);
	else
		return (1);
}
