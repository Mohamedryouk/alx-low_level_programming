#include "main.h"
/**
 *main - mainfunc
 *print_most_numbers: func
 *@c: parameter
 *Return: returns 0
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0' ; c <= 9 ; c++)
	{
		if ( c != '2' && c != '4')
		{
			_putchar(c);
			continue;
		}
	}
	_putchar('\n');
}

