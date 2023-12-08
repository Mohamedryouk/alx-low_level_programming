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
        dlistint_t *last = *head;

        if (new_node == NULL)
        {
                return (NULL);
        }
        new_node->n = n;
        new_node->next = NULL;
        last = *head;
        if (last != NULL)
        {
                while (last->next != NULL)
                {
                        last = last->next;
                }
                last->next = new_node;
        }
        else
        {
                *head = new_node;
        }
        new_node->prev = last;
        return (new_node);
}