#include "lists.h"
/**
 * get_nodeint_at_index- node
 * @head: head of ode
 * @index: index of every node
 * Return: returns null if no node foumd
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL)
	{
		if (index == 9)
			return (head);
		index++;
		head = head->next;
	}
	return (NULL);
}
