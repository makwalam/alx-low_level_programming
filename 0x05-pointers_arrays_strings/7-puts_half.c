#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int length, start, i;

	if (str == NULL)
		return;

	length = strlen(str);

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;

	for (i = start; i < length; i++)
	{
		/* Print characters from start to end */
		_putchar(str[i]);
	}

	_putchar('\n');
}

