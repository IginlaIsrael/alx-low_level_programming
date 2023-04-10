#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * add - Adds positive integers
 * @str: a string variable
 *
 * Return: is 0 when successful
 */
int add(char *str)
{
	unsigned int w;

	w = 0;
	while (w < strlen(str))

	{
		if (!isdigit(str[w]))
		{
			return (0);
		}

		w++;
	}
	return (1);
}
