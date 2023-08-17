#include "main.h"
/**
 *main- 
 *Return: 0
 */
int print_alphabet_x10(void)
{
	int i;
	
	for (i = 0 ; i<= 10 ; i++)
	{
		char l;

		for (l = 'a' ; l <= 'z' ; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
