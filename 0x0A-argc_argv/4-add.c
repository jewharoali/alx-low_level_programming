#include "main.h"

/**
 * check_num - Check if a string represents a positive integer.
 * @str: string being checked
 * Return: returns 0
 */
int check_num(const char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Program that adds positive numbers passed as arguments.
 * @argc:argument count
 * @argv:argument list
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, str_to_convert;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			str_to_convert = atoi(argv[i]);
			sum += str_to_convert;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
