#include <stddef.h>
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The bytes to be searched for
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
		return NULL;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return s;

			a++;
		}

		s++;
	}

	return NULL;
}

