#include "lists.h"
/**
 * insert_nodeint_at_index- insert a new node
 * @head: head of node
 * @idx: int
 * @n:  integer
 * Return: return null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < (idx - 1) && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
