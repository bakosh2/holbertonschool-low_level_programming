#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: arguments list
 * @sep: separator
 */
void print_char(va_list args, char **sep)
{
	printf("%s%c", *sep, va_arg(args, int));
	*sep = ", ";
}

/**
 * print_int - prints an int
 * @args: arguments list
 * @sep: separator
 */
void print_int(va_list args, char **sep)
{
	printf("%s%d", *sep, va_arg(args, int));
	*sep = ", ";
}

/**
 * print_float - prints a float
 * @args: arguments list
 * @sep: separator
 */
void print_float(va_list args, char **sep)
{
	printf("%s%f", *sep, va_arg(args, double));
	*sep = ", ";
}

/**
 * print_string - prints a string
 * @args: arguments list
 * @sep: separator
 */
void print_string(va_list args, char **sep)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s%s", *sep, str);
	*sep = ", ";
}

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
	char *sep = "";
	void (*func)(va_list, char **) = NULL;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			func = print_char;
		if (format[i] == 'i')
			func = print_int;
		if (format[i] == 'f')
			func = print_float;
		if (format[i] == 's')
			func = print_string;

		if (func)
			func(args, &sep);

		func = NULL;
		i++;
	}

	printf("\n");
	va_end(args);
}
