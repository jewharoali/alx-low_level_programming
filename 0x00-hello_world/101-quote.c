#include <stdio.h>
#include <unistd.h>

/**
 * main - Main function
 * Return: returns 1
 */
int main(void)
{
	const char message1[] = "and that piece of art is useful\"";
	const char message2[] =	" - Dora Korpar, 2015-10-19\n";

	write(2, message1, sizeof(message1) - 1);
	write(2, message2, sizeof(message2) - 1);
	return (1);
}
