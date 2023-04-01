#include "main.h"

/**
 * _isdigit - The function that checks for a digit
 *
 * @c: The parameter/function to be checked
 *
 * Return: Returns 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
