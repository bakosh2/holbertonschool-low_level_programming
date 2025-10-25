#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 *
 * Return: pointer to string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*ptr)
	{
		for (i = 0; alpha[i]; i++)
		{
			if (*ptr == alpha[i])
			{
				*ptr = rot13[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
