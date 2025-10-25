#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	/* Find the end of dest */
	while (*ptr != '\0')
		ptr++;

	/* Copy at most n bytes from src */
	while (i < n && src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}

	/* Add null terminator */
	ptr[i] = '\0';

	return (dest);
}
