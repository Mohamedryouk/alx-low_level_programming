#include <stdlib.h>
#include "lists.h"
/**
 *free_list - free list or delete it
 *
 *@head: pointer to thr func
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
