#include "lists.h"
/**
 * free_listint2- frees one list
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
		return;
	current = *head;
	while (*head != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
