#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Find the end of the `dest` string */
	while (*ptr)
		ptr++;

	/* Append `src` to `dest` */
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add the null byte at the end */
	*ptr = '\0';

	return (dest);
}

