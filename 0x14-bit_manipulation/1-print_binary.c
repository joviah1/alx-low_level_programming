#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be presented
 */
void print_binary(unsigned long int n)
{
	unsigned long int p = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int i = 0;

	while (p > 0)
	{
		if (n & p)
		{
			putchar('1');
			i = 1;
		}
		else if (i || p == 1)
		{
			putchar('0');
		}
		p >>= 1;
	}
	putchar('\n');
}

