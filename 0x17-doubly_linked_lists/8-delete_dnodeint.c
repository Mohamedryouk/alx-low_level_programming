#include "lists.h"
/**
 *delete_dnodeint_at_index - lists delete
 *@head: head of list
 *@idex: indexs
 *Return: return lists
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
	unsigned int i;
	dlistint_t *current = *head;

	if (head == NULL || *head == NULL)
		return -1;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return 1;
	}
	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
		return (-1);
	if (current->prev != NULL)
		current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}