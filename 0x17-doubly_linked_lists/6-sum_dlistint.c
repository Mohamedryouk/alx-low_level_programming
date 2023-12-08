#include "lists.h"
/**
 *sum_dlistint- sum of list
 *@head: head of list
 *Return: return sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
