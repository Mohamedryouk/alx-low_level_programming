#include "main.h"
/**
 *rot13 - func
 *
 *@n: var
 *
 *Return: 0
 *
 */
char *rot13(char *n)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "azsdfcgvhbjnkmlpoiuuytrewqQWERTYUIOPLKJHGFDSAZXCVBNM";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == data1[j])
			{
				n[i] = datarot[j];
				break;
			}
		}
	}
	return (n);
}

