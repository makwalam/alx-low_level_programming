#include <stdlib.h>

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
	char *ptr = str;
	char c;

	while ((c = *ptr) != '\0')
	{
		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			*ptr += 13;
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
			*ptr -= 13;

		ptr++;
	}

	return str;
}

