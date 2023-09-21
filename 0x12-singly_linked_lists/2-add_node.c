#include "lists.h"
/**
 *add_node- adding new node to the linked list
 *@str: list of string
 *@head: pointer to the next node address
 *Return: return new node added
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int len= 0;

	while (str[len])
		len++;
	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = (*head);
	(*head) = ptr;
	return (*head);
}
