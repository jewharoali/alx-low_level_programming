#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc:argument account
 * @argv:character array
 * Return:0 if successful
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	return (0);
}
