#include "main.h"

/**
 * _isupper - Checks for upper case letters
 *
 * @c: Is the parameter to be checked
 *
 * Return: Returns 1 when true and 0 when false.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
