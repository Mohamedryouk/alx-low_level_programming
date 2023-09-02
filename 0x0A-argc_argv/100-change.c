#include <stdio.h>
#include <stdlib.h>
/**
 *main- main func
 *
 *@argv: int
 *@argc: argu
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		int leastcents = 0;
		int money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				leastcents += money / cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
