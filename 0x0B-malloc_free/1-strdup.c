#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space
 * @str: Duplicate of the string
 *
 * Return: the duplicated string
 */

char *_strdup(char *str)
{
	int i = 0, k = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[k])
	{
		k++;
	}

	s = malloc((sizeof(char) * k) + 1);

	if (s == NULL)
		return (NULL);
	while (i < k)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

