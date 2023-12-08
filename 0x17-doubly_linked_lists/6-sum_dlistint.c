#include "lists.h"
/**
<<<<<<< HEAD
 * sum_dlistint- sum of list
 * @head: head of list
 * Return: return the sum
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
=======
 *sum_dlistint - sum of list
 *@head: head of list
 *Return: return the sum of the list
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
>>>>>>> 5f6fbf53b125d643ad28ed6286398e6db55df168
