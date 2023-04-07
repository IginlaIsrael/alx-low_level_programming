#include "main.h"

/**
 * _pow_recursion - function that returns the value of x*y
 * @x: Parameter something is raised to
 * @y: Parameter that is raised
 * Return: returns -1 when y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
