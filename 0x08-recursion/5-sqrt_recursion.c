#include "main.h"

int square_root(int, int);
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n:number which square root is being calculated
 * Return:square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}
/**
 * square_root - calculates the actual square root
 * @i:number being square rooted
 * @n:number which square root is being calculated
 * Return:the square root
 */
int square_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (square_root(n, i + 1));
}
