#include "lists.h"
/**
 *dlistint_len - prints number of elements
 *@h: header of lists
 *Return: return number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
        const dlistint_t *elements = h;
        size_t count = 0;

        while (elements != NULL)
        {
                elements = elements->next;
                count++;
        }
        return (count);
}