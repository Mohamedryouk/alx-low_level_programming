#include "lists.h"
/**
 * print_listint- prints the elements of the lists
 * @h: list pointer to head
 * Return: returns the number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%u \n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
