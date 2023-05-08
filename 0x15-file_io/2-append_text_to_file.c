#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: THe name of the file to be modified
 * @text_content: is a NULL terminated string to add at the end of the file
 * Return: IS an int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, fn = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0 ; text_content[i] ; )
			i++;
	}

	fn = open(filename, O_WRONLY | O_APPEND);
	j = write(fn, text_content, i);

	if (fn == -1 || j == -1)
		return (-1);
	close(fn);
	return (1);

}
