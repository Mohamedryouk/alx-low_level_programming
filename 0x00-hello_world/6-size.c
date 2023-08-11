#include <stdio.h>
/**
 * main- main func
 * Return: return 0 success
 */
int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("\nsize of an int: %lu byte(s)", sizeof(int));
	printf("\nsize of a long int: %lu byte(s)", sizeof(long int));
	printf("\nsize of a long long int: %lu byte(s)", sizeof(long long int));
	printf("\nsize of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
