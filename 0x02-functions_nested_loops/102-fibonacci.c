#include <stdio.h>

/**
 * main - main function
 * Return: 0 zero when successful
 */
int main(void)
{
	long long int i, n, t1, t2, nextTerm;

	n = 50, t1 = 1, t2 = 2;

	printf("%lld, ", t1);
	printf("%lld, ", t2);

	for (i = 3; i < n; i++)
	{
		nextTerm = t1 + t2;
		printf("%lld, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
	}
	printf("\n");
	return (0);
}
