#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* احسب طول السلسلة */
	while (s[length] != '\0')
	{
		length++;
	}

	/* اطبع بالعكس من نهاية السلسلة */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
