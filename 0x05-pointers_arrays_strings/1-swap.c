#include "main.h"
/**
 *swap_int(int *a, int *b)- two pointers
 *@a: useless
 *@b: useless
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
