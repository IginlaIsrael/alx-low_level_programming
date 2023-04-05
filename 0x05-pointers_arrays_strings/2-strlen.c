#include "main.h"

/**
 * _strlen - prints the length of strings
 *@s: parameter to be printed
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
