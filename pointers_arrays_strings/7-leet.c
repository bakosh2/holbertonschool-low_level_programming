#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to string
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "4433007711";
	int i;

	while (*ptr)
	{
		for (i = 0; leet_chars[i]; i++)
		{
			if (*ptr == leet_chars[i])
				*ptr = leet_nums[i];
		}
		ptr++;
	}
	return (str);
}
