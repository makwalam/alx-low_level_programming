#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int i;

	if (s == NULL)
		return;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* Find the end of the string */
	}

	for (i = i - 1; i >= 0; i--)
	{
		/* Print characters in reverse order */
		_putchar(s[i]);
	}

	_putchar('\n');
}

