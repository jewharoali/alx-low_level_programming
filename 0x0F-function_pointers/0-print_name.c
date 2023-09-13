#include "function_pointers.h"

/**
 * print_name - that prints a name
 * @name:name to be printed
 * @f:function pointer to print_name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
