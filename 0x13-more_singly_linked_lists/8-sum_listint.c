#include "lists.h"
/**
 * sum_listint- sum of nodes data
 * @head: head of the linked lists node
 * Return: return sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;


	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
