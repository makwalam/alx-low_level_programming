#include "main.h"

/**
 * puts2 - Prints every other character of a string, followed by a new line
 * @str: The string to be printed
 */
void puts2(char *str)
{
	int i;

	if (str == NULL)
		return;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		/* Print characters at even indices */
		_putchar(str[i]);
	}

	_putchar('\n');
}

