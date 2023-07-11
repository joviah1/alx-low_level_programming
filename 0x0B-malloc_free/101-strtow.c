#include "main.h"
#include <stdlib.h>

/**
 * **strtow - splits a string into words.
 * @char: Array of string
 * @str: A string
 * Return: Nothing
 */

char **strtow(char *str)
{
	int word_count = 0;
	int i, j, k;
	int len = strlen(str);

	 if (str == NULL || strlen(str) == 0)
		 return (NULL);

	 for (i = 0; i < len; i++)
	 {
		 if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			 word_count++;
	 }
	 char **words = (char **)malloc((word_count + 1) * sizeof(char *));
	 if (words == NULL)
		 return (NULL);
	 j = 0;

	 for (i = 0; i < len; i++)
	 {
		 if (str[i] != ' ')
		 {
			  k = i;

			  while (str[k] != ' ' && k < len)
				  k++;

			  words[j] = (char *)malloc((k - i + 1) * sizeof(char));
			  if (words[j] == NULL)
			  {
				  for (i = 0; i < j; i++)
					  free(words[i]);
				  free(words);
				  return (NULL);
			  }
			  strncpy(words[j], &str[i], k - i);
			  words[j][k - i] = '\0';

			  j++;
			  i = k;
		 }
	 }
	 words[word_count] = NULL;
	 return words;
}
