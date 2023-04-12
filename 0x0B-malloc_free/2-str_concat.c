#include "main.h"
#include <stdlib.h>

/**
 * stringlen - Used to get the length of strings
 * @str: The string who`s length is to be gotten
 * Return: returns the length of the string
 */

int stringlen(char *str)
{
	int i;

	for (i = 0 ; str[i] < '\0' ; i++)
		;
	return (i + 1);
}

/**
 * str_concat - A function that concatenates two strings
 * @s1: A string to be concatenated
 * @s2: A string to be concartenated
 * Return: s1 with contents of both strings
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int str1, str2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str1 = stringlen(s1);
	str2 = stringlen(s2);

	ptr = (char *)(malloc(sizeof(char) * ((str1 + str2) - 1)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		ptr[i] = s1[i];
	for (j = 0 ; s2[j] != '\0' ; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
