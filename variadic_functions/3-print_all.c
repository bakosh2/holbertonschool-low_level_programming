#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on format
 * @format: list of types of arguments
 * @...: variable arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *sep = "";

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			if (format[i] == 'c')
			{
				printf("%s%c", sep, va_arg(args, int));
				sep = ", ";
			}
			if (format[i] == 'i')
			{
				printf("%s%d", sep, va_arg(args, int));
				sep = ", ";
			}
			if (format[i] == 'f')
			{
				printf("%s%f", sep, va_arg(args, double));
				sep = ", ";
			}
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				sep = ", ";
			}
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
