#include "lists.h"
/**
 * pop_listint- delete a node at giveen position
 * @head: head of the node
 * Return: return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (*head == NULL)
		return (0);
	current = *head;
	*head = (*head)->next;
	n = current->n;
	free(current);

	return (n);
}


