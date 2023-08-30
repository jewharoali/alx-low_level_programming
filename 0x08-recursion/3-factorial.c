#include "main.h"

/**
 * factorial - that returns the factorial of a given number
 * @n:numbers which it's factorial is being calculated
 * Return: if n is less then 0 return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
