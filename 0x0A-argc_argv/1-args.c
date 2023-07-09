#include <stdio.h>
#include "main.h"

/**
 * main - prints the number
 * @agrv: argument vector
 * @argc: argument count
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

