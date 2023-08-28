#include "main.h"
/**
 * _strstr - function
 *
 *@haystack:
 *
 *@needle:
 *
 *Return: 0 value
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *pt = haystack;
		char *p = needle;

		while (*pt == *p && *p != '\0')
		{
			pt++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0)
}


