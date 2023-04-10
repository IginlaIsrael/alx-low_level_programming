#include "main.h"

/**
 * print_rev -Prints a string in reverse
 * @s: The string to be reversed
 * Return: IS 0 when successful
 */

void print_rev(char *s)
{
	int revcount = 0;

	while (*s)
	{
		s++;
		revcount++;
	}
	while (revcount)
	{
		s--;
		_putchar(*s);
		revcount--;
	}
	_putchar('\n');
}
