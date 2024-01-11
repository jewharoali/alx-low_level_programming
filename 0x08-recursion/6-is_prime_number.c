#include "main.h"

int prime_number(int, int);

/**
 * is_prime_number - function that returns 1 if the input integer is a prime-
 * number, otherwise return 0
 * @n:integer
 * Return:0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}
/**
 * prime_number - checks for prime numbers
 * @n:integer 1
 * @i:integer 2
 * Return:0 or 1
 */
int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 1)
		return (0);
	return (prime_number(n, i - 1));
}
