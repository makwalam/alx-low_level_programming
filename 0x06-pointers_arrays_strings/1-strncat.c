#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Get the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Concatenate characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	dest[dest_len] = '\0'; /* Add null-terminating character */

	return (dest);
}

