#include "lists.h"
/**
 * listint_len- function to get the numbers of the elements in list
 * @h: pointer to the next node
 * Return: returns the number of the element in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
