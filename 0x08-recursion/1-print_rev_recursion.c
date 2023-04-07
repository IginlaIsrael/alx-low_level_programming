#include "main.h"

/**
 * _print_rev_recursion - Prints the reverse of a string
 * @s: THe string to be printed in reverse
 * Return: Is 0 when true
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
