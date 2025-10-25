#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize = 1;

	while (*ptr)
	{
		if (capitalize && *ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		capitalize = 0;
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
		    *ptr == ',' || *ptr == ';' || *ptr == '.' ||
		    *ptr == '!' || *ptr == '?' || *ptr == '"' ||
		    *ptr == '(' || *ptr == ')' || *ptr == '{' ||
		    *ptr == '}')
			capitalize = 1;
		ptr++;
	}
	return (str);
}
