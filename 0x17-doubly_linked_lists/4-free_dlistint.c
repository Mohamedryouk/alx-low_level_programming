#include "lists.h"
/**
 *free_dlistint - free dlistint_t list
 *@head: head of the list
 *Return: return elements of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
    dlistint_t *new_node;

	while (current != NULL)
	{
		new_node = current->next;
        free(current);
		current = new_node;
	}
}
