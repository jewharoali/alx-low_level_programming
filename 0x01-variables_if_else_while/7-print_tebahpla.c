#include <stdio.h>

/**
 * main - Main function
 * Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
