#include "lists.h"
/**
add_dnodeint_end- add node at the end of node
@head: head of node
@n: data
Return: return elements
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
        dlistint_t *new_node = malloc(sizeof(dlistint_t));
        dlistint_t *last;

        if (new_node == NULL)
        {
                return (NULL);
        }
        new_node->n = n;
        last = *head;
        new_node->next = NULL;
        if (*head == NULL)
        {
                *head = new_node;
                return (NULL);
        }
        while (last->next != NULL)
        {
                last = last->next;
        }
        last->next = new_node;
        return (new_node);
}