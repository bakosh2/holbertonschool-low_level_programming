#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: converted integer
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			started = 1;
			/* Check for overflow before actually causing it */
			if (num > (2147483647 - (*s - '0')) / 10)
			{
				if (sign == 1)
					return (2147483647);
				else
					return (-2147483648);
			}
			num = num * 10 + (*s - '0');
		}
		else if (started)
		{
			/* Stop if we already started converting numbers */
			break;
		}
		s++;
	}

	return (num * sign);
}
