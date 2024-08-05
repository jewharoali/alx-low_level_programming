#include <stdio.h>

/**
 * main - main function
 * Return: 0 when successful
 */
int main(void)
{
	int i, n, sum;

	n = 1024;
	sum = 0;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
