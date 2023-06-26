#include "stddef.h"
/**
 * _strlen - return the length of a string.
 * @s: string.
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

