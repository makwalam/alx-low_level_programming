#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int i;

	if (len <= 1)
		return (1); /* An empty string or a string with one character is a palindrome */

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - 1 - i])
			return (0); /* Not a palindrome */
	}

	return (1); /* It's a palindrome */
}

