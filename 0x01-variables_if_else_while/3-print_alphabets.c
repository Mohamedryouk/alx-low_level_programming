#include <stdio.h>
/**
 *main- mainfunc
 *Return: 0 = success
 */
int main(void)
{	char  n;

	for (n = 'a'; n<'z' ;n++)
	{
	for (n = 'A'; n<'Z' ;n++);
	putchar(n);
	}
	putchar(n);
	putchar('\n');
	return (0);
}

