#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number we want to clear
 * @index: The index of the bit to clear, starting from 0 (LSB)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bitmask = 1UL << index;

	*n = *n & ~bitmask;

	return (1);
}

