#include "main.h"
/**
 *swap_int(int *a, int *b)- two pointers
 *@a: useless
 *@b: useless
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*a = *b;
	*b = c;
}
