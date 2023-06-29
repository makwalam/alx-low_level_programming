#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i, capitalize_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
		else if (strchr(" \t\n,;.!?\"(){}", str[i]) != NULL)
		{
			capitalize_next = 1;
		}
	}

	return (str);
}

