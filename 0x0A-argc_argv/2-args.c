#include "main.h"

/**
 * main - main function
 * @argc:arugment count
 * @argv:argument list
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
