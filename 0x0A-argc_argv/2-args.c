#include <stdio.h>
/**
 *main- main function
 *
 *@argc: int
 *@argv: return arg
 *Return: 0 -success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
