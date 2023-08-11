#include <stdio.h>

/**
 * main - Main function
 * Return: returns 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; ++i)
	{
		for (j = 0; j <= 9; ++j)
		putchar('0' + i);
		putchar('0' + j);
		if (i < 8 || j < 9)
			putchar(',');
		putchar(' ');
		putchar('\n');
	}
	return (0);
}
