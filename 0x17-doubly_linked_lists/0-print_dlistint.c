#include "lists.h"
/**
 *print_dlistint - return list element
 *@h: pointer of header
 *Return: returns the elements
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *elements = h;
	size_t count = 0;

	while (elements != NULL)
	{
		printf("%d\n", elements->n);
		elements = elements->next;
		count++;
	}
	return (count);
}
