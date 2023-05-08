#include "main.h"

/**
 * read_textfile - IS a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: Is the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: Is ssize_t
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fp;
	ssize_t i;
	ssize_t j;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	j = read(fp, buff, letters);
	i = write(STDOUT_FILENO, buff, j);

	free(buff);
	close(fp);
	return (i);
}
