#include "main.h"
/*
 * print_alphabet_x10 - print alphabets ten times in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		char currentLetter = letter;
		int j;

		for (j = 0; j < 26; j++)
		{
			_putchar(currentLetter);
			currentLetter++;
		}
		_putchar('\n');
	}
}
