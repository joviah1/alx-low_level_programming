#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and print to STDOUT
 * @letters: Letters to print and read
 * @filename: Name of the file to read
 *
 * Return: the actual number of letters it could read and print
 * 0 if the file cannot be opened or read, or if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t read_chars, write_chars;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buf);
		return (0);
	}
	read_chars = read(file_descriptor, buf, letters);
	if (read_chars == -1)
	{
		free(buf);
		close(file_descriptor);
		return (0);
	}
	write_chars = write(STDOUT_FILENO, buf, read_chars);
	if (write_chars != read_chars)
	{
		free(buf);
		close(file_descriptor);
		return (0);
	}
	free(buf);
	close(file_descriptor);
	return (write_chars);
}
