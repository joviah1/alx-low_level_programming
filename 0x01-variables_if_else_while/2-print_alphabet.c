#include <stdio.h>

/**
 * main - prints alphabets.
 *
 * Return: Always 0
 */
int main(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}

