#include <stdlib.h>
#include "main.h"

/**
 *  **alloc_grid -  returns a pointer to a 2 dimensional array
 *  @width: The width
 *  @height: The height
 *
 * Return: ..
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **c;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = malloc(sizeof(int *) * height);

	if (c == NULL)
	{
		free(c);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		c[i] = malloc(sizeof(int) * width);

		if (c[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(c[j]);
			}
			free(c);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			c[k][l] = 0;
		}
	}
	return (c);
}
