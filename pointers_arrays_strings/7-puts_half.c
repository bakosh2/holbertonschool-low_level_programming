#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;

	i = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

	while (i < len)
		_putchar(str[i++]);
	
	_putchar('\n');
}
