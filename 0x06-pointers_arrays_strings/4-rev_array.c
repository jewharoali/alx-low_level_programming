#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array being reversed
 * @n: elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp = 0;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
