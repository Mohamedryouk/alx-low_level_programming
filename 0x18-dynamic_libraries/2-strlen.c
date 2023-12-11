#include "main.h"
/**
 *_strlen- returns the length
 *@s: pointer from type int
 *Return: returns count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s++)
	count++;
	return (count);
}
