#include "main.h"
/**
 *_strlen- function to calculate the lenght of the string
 *
 *@s: the parameter to pointer that points to the string char
 *Return: returns the size of the string
 */
int _strlen(char *s)
{
	int size = 0;

	for(; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 *str_concat- function to concatente strings
 *@s1: string num one
 *@s2: string num two
 *Return: returns the concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *new_str;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	new_str = malloc((size1 + size2) * sizeof(char) + 1);
	if (new_str == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			new_str[i] = s1[i];
		else
			new_str[i] = s2[i - size2];
	}
	new_str[i] = '\0';
	return (new_str);
}
