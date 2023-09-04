#include "main.h"

/**
 * _atoi - converts string to an integer
 * @str:string being converted
 * Return: returns 0
 */
int _atoi(const char *str)
{
	int result = 0;
	int i = 1;

	while (*str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (i * result);
}
/**
 * main - main function
 * @argc:argument count
 * @argv:arfument list
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
