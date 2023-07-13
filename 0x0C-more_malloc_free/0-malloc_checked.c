#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: size 
 *
 * Return - Always 0
 */

void *malloc_checked(unsigned int b)
{
	void *ptr =  malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(98);
	}
	return (ptr);
}
