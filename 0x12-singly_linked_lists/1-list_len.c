#include "lists.h"
/**
 *list_len- function to print the number of element
 *
 *@h: printf to structer that prints linked lists
 *Return: return the num of element
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
