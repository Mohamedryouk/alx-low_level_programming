#include <stdio.h>
#include "lists.h"

void first(void) __attribute__ ((constructor));
/**
 *first - const
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
