#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @str: The string to convert.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32; /* Convert lowercase to uppercase */
		}
		i++;
	}

	return str;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}

