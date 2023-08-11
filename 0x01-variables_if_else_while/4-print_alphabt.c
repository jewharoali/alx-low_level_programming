#include <stdio.h>

/**
 * main - Main function
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q')
			continue;
		if (i == 'e')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}

