#include "main.h"
/**
 *argstostr- function proto
 *@ac: para
 *@av: pointer para
 *Return: return 0
 *
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = 0, y = 0;
	char *std;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			y++;
	}
	y += ac;

	std = malloc(sizeof(char) * y + 1);
	if (std == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			std[x] = av[i][j];
			x++;
		}
		if (std[x] == '\0')
		{
			std[x++] = '\n';
		}
	}
	return (std);
}
