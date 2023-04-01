#include "main.h"

/**
 * print_square - Prints squares
 * @size: Tells the size of the square
 * Return: is 0
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar ('\n');
	else
	{
		int i;
		int j;

		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}
			_putchar ('\n');
		}
	}
}
