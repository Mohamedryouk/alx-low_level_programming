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
	dlistint_t *current = *h;

	if (h == NULL)
<<<<<<< HEAD
        return (NULL);
    if (new_node == NULL)
        return (NULL);
=======
		return (NULL);
	if (new_node == NULL)
		return (NULL);
>>>>>>> abab613272e743b19f73f6d349cbeb57457f6732

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

<<<<<<< HEAD
    if (current == NULL) {
        free(new_node);
        return (NULL);
    }
    new_node->prev = current;
    new_node->next = current->next;
=======
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;
>>>>>>> abab613272e743b19f73f6d349cbeb57457f6732

	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;

<<<<<<< HEAD
    return (new_node);
}
=======
	return (new_node);
}
>>>>>>> abab613272e743b19f73f6d349cbeb57457f6732
