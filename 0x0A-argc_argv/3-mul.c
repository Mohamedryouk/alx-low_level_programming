#include <stdlib.h>
#include <stdio.h>
/**
 *main - main func
 *@argc: int
 *@argv: char argu
 *Return: zero success
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
