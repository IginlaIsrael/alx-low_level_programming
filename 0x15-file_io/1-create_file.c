#include "main.h"

/**
 * create_file - This is a function that creates a file
 * @filename: The name of the file to be created
 * @text_content: Is a null terminated string
 * to be written to the file
 * Return: Is an integer
 */

int create_file(const char *filename, char *text_content)
{
	int fp, v;
	int j = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (j = 0 ; text_content[j]; )
			j++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	v = write(fp, filename, j);

	if (fp == -1 || v == -1)
		return (-1);
	close(fp);

	return (1);
}
