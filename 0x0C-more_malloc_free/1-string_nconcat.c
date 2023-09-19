#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat- none concat strings
 *@s1: para 1
 *@s2: para 2
 *@n: int posi
 *Return: return 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (i = 0; i < n && s2[i]; i++)
		s[len1 + i] = s2[i];

	s[len1 + i] = '\0';

	return (s);
}

