#include <stdlib.h>
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
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->next);
		free(head);
		head = ptr;
	}
}
