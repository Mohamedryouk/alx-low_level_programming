#include "lists.h"
/**
 * add_nodeint- adding new node
 * @head: head
 * @n: num of nodes
 * Return: return the address of node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	
	if (!new_node)
		return (NULL);
	
	new_node->data = n;
	new_node->next = (*head);
	
	(*head) = new_node;
	
	return (new_node);
}
