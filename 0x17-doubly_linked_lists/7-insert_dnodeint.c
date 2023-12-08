#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node
 * @h: header
 * @idx: intgere of data
 * @n: datat
 * Return: return
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	new_node = *h;

	if (h == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && new_node != NULL; i++)
	{
		new_node = new_node->next;
	}
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = new_node;
	new_node->next = new_node->next;
	if (new_node->next != NULL)
	{
		new_node->next->prev = new_node;
	}
	new_node->next = new_node;
	return (new_node);
}
