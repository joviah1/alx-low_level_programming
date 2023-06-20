#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be printed.
 * Return: value of the last digit of the number.
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
	}
}
