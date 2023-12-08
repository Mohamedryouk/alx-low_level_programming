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
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = next->prev;
	next->prev = new_node;
	new_node->next = new_node;
	if (new_node->prev != NULL)
	{
		new_node->prev->next = new_node;
		*h = new_node;
	}
	return (new_node);
}
