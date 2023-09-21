#include "lists.h"
/**
 *print_list- printing data of linked lists
 *@h:the pointer containig the first node addres
 *Return: returns the linked lists data
 */
size_t print_list(const list_t *h)
{
	size_t ptr = 0;


	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		ptr++;
	}
	return (ptr);
}
