#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;
	int res = 1;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "w");

	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
		if (fputs(text_content, file) == EOF)
			res = -1;
	}
	fclose(file);
	return (res);
}

