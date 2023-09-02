#include "main.h"
/**
 *main- main func
 *Description: Describes the numbers from 0 to 9
 *@c: is the variable
 *Return: returns 0
 */
int _isdigit/*Description*/(int c)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		if (c >= '0' && c <= '9')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
