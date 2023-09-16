#include "main.h"
/**
 *_strdup- prototpye function
 *
 *@str: pointer
 *
 *Return: return 0 after execution
 *
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;

	new_str = malloc(size * sizeof(*str) + 1);

	if (new_str == 0)
		return (NULL);
	for (; i < size; i++)
		new_str[i] = str[i];
	return (new_str);
}
