#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the character
 * Return: return 1 if it is a letter. return 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
