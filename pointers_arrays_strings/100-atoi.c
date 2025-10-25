#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: input string
 * Return: converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	/* Skip spaces and handle signs */
	while (s[i] == ' ' || s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	/* Convert numbers */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Simple conversion without complex overflow checks */
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
