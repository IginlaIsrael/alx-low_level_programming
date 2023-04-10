#include "main.h"

/**
 * puts2 - A function that prints even numbers of a strings array
 * @str: The string the function is to act upon
 * Return: is 0 when successful
 */

void puts2(char *str)
{
	int k = 0, z;

	while (*str)
	{
		k++;
		str++;
	}
	for (z = 0 ; z < k ; k++)
		str--;
	for (z = 0 ; z < k ; z++)
	{
		if (z % 2 == 0)
			_putchar(str[z]);
	}
	_putchar('\n');
}
