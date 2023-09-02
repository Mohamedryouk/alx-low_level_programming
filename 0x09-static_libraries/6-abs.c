#include"main.h"
/**
 * _abs - abslute function
 *
 *@c: int
 *
 *Return: return the abslute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c + -1;
		return (abs_val);
	}
	return (c);
}
