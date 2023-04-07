#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: THe string that is to be printed
 *
 * Return: is 0 when successful
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
