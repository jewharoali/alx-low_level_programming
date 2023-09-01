#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @t: number being computed
 * Return: returns 0
 */
int _abs(int t)
{
	if (t >= 0)
		return (t);
	else
		return (-t);
}
