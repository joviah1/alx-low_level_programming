#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function
 *
 * Description: This function iterates over an array of integers
 * and applies the given function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

