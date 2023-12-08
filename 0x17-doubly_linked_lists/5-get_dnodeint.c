#include "lists.h"
/**
 *get_dnodeint_at_index - return index of list
 *@head: head of list
 *@index: index of list
 *Return: return index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (i == index && current != NULL)
	{
		return current;
	}
	else
	{
		return (NULL);
	}
}
