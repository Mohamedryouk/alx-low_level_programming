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
	int n;
	struct list *next;
};

typedef struct list listint_t;
size_t print_listint(const listint_t *h);
#endif /*lists.h*/
