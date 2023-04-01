#include "main.h"

/**
 * print_numbers - PRints numbers from 0 to 9
 *
 * Return: Return is 0 here
 *
 */

void print_numbers(void)
{
	char i;

	for (i = 0 ; i <= 9 ; i++)
		_putchar(i + '0');
	_putchar('\n');
}
