#include "lists.h"
/**
 *free_list - free list or delete it
 *
 *@head: pointer to thr func
 *
 *Return: returns 0
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
	return (head);
}
