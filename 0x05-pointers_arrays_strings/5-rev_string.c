#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int len = 0;
	int var = 0;
	char temp;

	while (s[var++])
		len++;
	for (var = len - 1; var >= len / 2; var--)
	{
		temp = s[var];
		s[var] = s[len - var - 1];
		s[len - var - 1] = temp;
	}
}


