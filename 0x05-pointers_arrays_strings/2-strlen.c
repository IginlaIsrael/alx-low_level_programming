#include "main.h"

/**
 * _strlen - prints the length of strings
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		count++;
	}
	return (count);
}
