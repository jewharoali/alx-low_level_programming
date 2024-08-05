#include <stdio.h>

/**
 * main - main function
 * Return:ereturns 0 when sucessful
 */
int main(void)
{
	unsigned long int t1, t2, nextTerm, sum;

	t1 = 1, t2 = 2, sum = 2;

	while (t2 <= 4000000)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		if (t2 % 2 == 0)
		{
			sum += t2;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
