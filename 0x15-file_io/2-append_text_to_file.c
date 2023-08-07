#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 * 1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fclose(file);
		return (1);
	}

	bytes_written = fprintf(file, "%s", text_content);
	fclose(file);

	if (bytes_written < 0)
		return (-1);

	return (1);
}
