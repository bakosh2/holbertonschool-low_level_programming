#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;
	char temp;

	/* احسب طول السلسلة */
	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	/* عكس السلسلة */
	while (start < end)
	{
		/* مبادلة الأحرف */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
