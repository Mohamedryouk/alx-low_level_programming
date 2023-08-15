#include <stdio.h>
/**
 *main- mainfunc
 *Return: 0
 */
int main(void)
{
	int asc[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int count, size;

	size = sizeof(asc) / sizeof(int);
	for (count = 0 ; count < size ; count++)
	{
		putchar(asc[count]);
	}
	putchar('\n');
	return (0);
}
