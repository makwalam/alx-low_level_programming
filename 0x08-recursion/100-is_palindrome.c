#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_recursive - Checks if a string is a palindrome recursively.
 * @s: The input string.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return 1; /* Base case: an empty string or a string with one character is a palindrome */

	if (s[start] != s[end])
		return 0; /* Not a palindrome */

	return is_palindrome_recursive(s, start + 1, end - 1); /* Recursively check the remaining characters */
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	return is_palindrome_recursive(s, 0, len - 1);
}

