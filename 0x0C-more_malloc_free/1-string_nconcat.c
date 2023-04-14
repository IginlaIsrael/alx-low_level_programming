#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - A function which concats two strings
 * @s1: String 1
 * @s2: String 2
 * @n: THe size of the new string
 * Return: COncarted string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int i = 0, j = 0, len = 0, str = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[str])
		str++;
	if (n < str)
		s = malloc(sizeof(char) * (len + n + 1));
	else
		s = malloc(sizeof(char) * (len + str + 1));
	if (!s)
		return (NULL);
	while (i < len)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < str && i < (len + n))

		s[i++] = s2[j++];
	while (n >= str && i < (len + str))

		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);

}
