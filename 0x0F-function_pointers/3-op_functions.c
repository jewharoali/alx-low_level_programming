#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - addition of two numbers
 * @a:integer 1
 * @b:integer 2
 * Return:sum of of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction of two numbers
 * @a:integer 1
 * @b:integer 2
 * Return:subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of two number
 * @a:integer 1
 * @b:integer 2
 * Return:multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two numbers
 * @a:integer 1
 * @b:integer 2
 * Return:division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of two numbers
 * @a:integer 1
 * @b:integer 2
 * Return:modular of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
