#include "main.h"

/**
 * print_alphabet - print lower case alphabets
 *
 * Return: is 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; 'a' <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
