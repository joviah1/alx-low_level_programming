#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything elses
 */
int _isalpha(int c)
{
	((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
