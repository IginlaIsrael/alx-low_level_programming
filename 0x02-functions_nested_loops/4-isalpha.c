#include "main.h"

/**
 *_isalpha - functions that checks for lower and upper case letters
 *
 *@c: parameter that checks
 *
 * Return: 1 when true and 0 when false
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
