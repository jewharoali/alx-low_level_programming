#include "main.h"

/**
 * main - main function
 * @argc:argument count
 * @argv:argument list
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int cents, quat = 0, dimes = 0, nick = 0;
	int twos = 0, ones = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			quat++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			dimes++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			nick++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			twos++;
		}
		else
		{
			cents -= 1;
			ones++;
		}
	}
	printf("%d %d %d %d %d\n", quat, dimes, nick, twos, ones);
	return (0);
}
