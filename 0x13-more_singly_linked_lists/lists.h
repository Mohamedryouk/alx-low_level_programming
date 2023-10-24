#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct list- struct name
 * @n: struct memeber
 * @next: struct pointer
 */
struct list
{
	int data;
	struct list *next;
};

typedef struct list listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
#endif /*lists.h*/
