#include "main.h"

/**
 * primenum - a function that returns the natural square root of a number
 * @n: The number that is to be checked
 * Return: is 0 when true and -1 when false
 */

int primenum(int n)
{
	int v;

	if (n * n == v)
		return (n);
	if (n == v)
		return (-1);
	return (1 * primenum(n + 1, v));
}

/**
 * _sqrt_recursion - a function that prints the natural square root of a number
 * @n: A parameter
 *
 * Return: 0 when succesful
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (primenum(1, n));
}
