#include "main.h"

int more_prime(int n, int i);
/**
 * is_prime_number - checks for a prime number
 * @n: number being checked whether it is a prime number or not
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (more_prime(n, n - 1));
}
/**
 * more_prime - that returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n:number being checked
 * @i:number being divided by n
 * Return: 0
 */
int more_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	return (more_prime(n, i - 1));
}

