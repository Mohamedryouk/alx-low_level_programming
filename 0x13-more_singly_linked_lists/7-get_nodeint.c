#include "lists.h"
/**
 * get_nodeint_at_index- node
 * @head: head of ode
 * @index: index of every node
 * Return: returns null if no node foumd
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = head;
	
	for (i = 0; i < index && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	
	return (tmp);
}
