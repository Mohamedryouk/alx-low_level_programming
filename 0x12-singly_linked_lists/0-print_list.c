#include "lists.h"
/**
 *print_list- printing data of linked lists
 *@list_t: the struct that contains the nodes
 *@h:the pointer containig the first node addres
 *Return: returns the linked lists data
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		printf("Linked lists is empty");
	struct node *ptr = NULL;
	while (ptr != NULL)
	{
		printf("%d", ptr-> list_t);
		ptr = ptr->next;
	}
	return (list_t);
}
