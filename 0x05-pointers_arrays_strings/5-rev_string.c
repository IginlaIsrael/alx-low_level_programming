#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: The string to be reversed
 * Return: is 0
 */

void rev_string(char *s)
{
	int i = 0, len = 0;
	char drake;

	while (*s)
	{
		s++;
		len++;
	}
	for (i = 0 ; i < len; i++)
	{
		s--;
	}
	for (i = 0 ; i < (len / 2); i++)
	{
		int me = len - 1;

		drake = s[me - i];
		s[me - i] = s[i];
		s[i] = drake;
	}
}
