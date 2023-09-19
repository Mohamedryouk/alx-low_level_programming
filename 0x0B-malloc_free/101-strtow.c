#include "main.h"
/**
 *count_word- func implementation
 *@s: pointer param to func
 *Return: return type zero
 */
int count_word(char *s)
{
	int flag = 0, a, u = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			u++;
		}
	}
	return (u);
}
/**
 *strtow- function strtow
 *@str: pointer param str
 *Return: return type zero
 */
char **strtow(char *str)
{
	char **matrix;
	int i, j, len, words, c = 0, start = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	c = count_word(str);
	if (c == 1)
		return (NULL);
	matrix = (char **)malloc(c * sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	matrix[c - 1];
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			matrix[start] = (char *)malloc(j * sizeof(char));
			j--;
			if (matrix[start] == NULL)
			{
				for (len = 0; len < start; len++)
					free(matrix[len]);
				free(matrix[c - 1];
				free(matrix);
				return (NULL);
			}
			for (words = 0; words < j; words++)
				matrix[start][words] = str[i - words];
			matrix[start][words] = '\0';
			start++;
			i += j;
		}
		else
			i++;
	}
	return (matrix);
}
