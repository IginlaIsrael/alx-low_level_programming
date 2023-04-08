#include "main.h"

/**
 * print_rev -Prints a string in reverse
 * @s: The string to be reversed
 * Return: IS 0 when successful
 */

void print_rev(char *s)
{
	int i, j = 0;

	while (s[j] != '\0')
		j++;
	for (i = j - 1 ; i >= 0 ; i++)
		_putchar(s[i]);
	_putchar('\n');
}
