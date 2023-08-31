#include "main.h"
/**
 *_strlen_recursion - func
 *
 *@s: return pointer to char as an arg
 *
 *Return: type
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
