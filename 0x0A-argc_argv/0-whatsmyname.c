#include <stdio.h>
/**
 *main - func
 *@argc: int
 *@argv: list
 */
void main(int argc, char *argv[])
{
	int i;

	for (i = 0;i < argc;i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
}
