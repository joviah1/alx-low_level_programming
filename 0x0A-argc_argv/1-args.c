#include <stdio.h>

/**
 * main - prints the number
 * @agrv: argument vector
 * @argc: argument count
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
