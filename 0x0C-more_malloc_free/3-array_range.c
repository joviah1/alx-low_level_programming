#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum
 * @max: the maximum
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
    int *a, i = 0;

    if (min > max)
        return (NULL);

    a = malloc(sizeof(int) * (max - min + 1));

    if (a == NULL)
        return (NULL);

    for (i = 0; i <= (max - min); i++)
    {
        a[i] = min + i;
    }

    return (a);
}

