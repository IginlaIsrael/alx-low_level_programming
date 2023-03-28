#include "main.h"

/**
 * print_sign - Prints the sign of an integer
 *
 *@n: is the parameter printed
 *
 *Return: prints 1 when positive, 0 when zero and -1 when negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
