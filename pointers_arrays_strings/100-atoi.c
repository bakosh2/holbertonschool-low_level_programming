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
	int digit;

	/* Skip non-digit characters and handle signs */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert digits to integer with overflow check */
	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		
		/* Check for positive overflow */
		if (sign == 1 && (result > 214748364 || 
			(result == 214748364 && digit > 7)))
			return (2147483647);
		
		/* Check for negative overflow */
		if (sign == -1 && (result > 214748364 || 
			(result == 214748364 && digit > 8)))
			return (-2147483648);
		
		result = result * 10 + digit;
		i++;
	}

	return (result * sign);
}
