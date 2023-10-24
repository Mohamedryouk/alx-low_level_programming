#include "lists.h"
/**
 * delete_nodeint_at_index- delete ind
 * @head: head of node
 * @index: ind
 * Return: 1 if succeeded -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ahed;
	listint_t *next;

	if (*head == NULL)
		return (-1);
	ahed = *head;

	if (index == 0)
	{
		*head = ahed->next;
		free(ahed);
		return (1);
	}
	for (i = 0; ahed != NULL && i < index - 1; i++)
		ahed = ahed->next;

	if (ahed == NULL || ahed->next == NULL)
		return (-1);
	next = ahed->next->next;
	free(ahed->next);
	ahed->next = next;
	return (1);
}
