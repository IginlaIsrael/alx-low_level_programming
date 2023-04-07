#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: THe string that is to be printed
 *
 * Return: is 0 when successful
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
