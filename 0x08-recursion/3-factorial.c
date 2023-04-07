#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number
 * @n: The parameter to be factored
 * Return: Reutrns 1 when successful and 0 on error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
