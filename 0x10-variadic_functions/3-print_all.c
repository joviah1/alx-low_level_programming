#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list all types of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char c_val;
	int i_val;
	float f_val;
	char *s_val;
	char format_char;

	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		format_char = format[i];
		i++;

		if (format_char == 'c')
		{
			 c_val = (char)va_arg(args, int);
			 printf("%c", c_val);
		}
		else if (format_char == 'i')
		{
			i_val = va_arg(args, int);
			printf("%d", i_val);
		}
		else if (format_char == 'f')
		{
			f_val = (float)va_arg(args, double);
			printf("%f", f_val);
		}
		else if (format_char == 's')
		{
			s_val = va_arg(args, char *);

			if (s_val == NULL)
				printf("(nil)");
			else
				printf("%s", s_val);
		}
	}
	va_end(args);
	printf("\n");
}
