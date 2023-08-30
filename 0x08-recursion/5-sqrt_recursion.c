#include "main.h"

int more_sqrt(int n, int m);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number which square root is being returned
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (more_sqrt(n, 0));
}
/**
 * more_sqrt - returns a natual sqaure root
 * @n:number being sqaure rooted
 * @m:numbers being square rooted a compared to n
 * Return: 0
 */
int more_sqrt(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);
	else if (m * m <= n)
		return (more_sqrt(n, m + 1));
	return (0);
}
