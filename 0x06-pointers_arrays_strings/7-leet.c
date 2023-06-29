#include <stdlib.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leetStr = malloc(sizeof(char) * 1024); /* Assuming maximum string length of 1024 */

	if (leetStr == NULL)
		return NULL; /* Error in memory allocation */

	int i, j;
	char leetChars[] = "4433007711";
	char replaceChars[] = "aAeEoOtTlL";

	i = 0;
	while (*ptr != '\0')
	{
		j = 0;
		while (replaceChars[j] != '\0')
		{
			if (*ptr == replaceChars[j])
			{
				leetStr[i] = leetChars[j];
				break;
			}
			j++;
		}
		if (replaceChars[j] == '\0')
			leetStr[i] = *ptr;
		ptr++;
		i++;
	}

	leetStr[i] = '\0';
	return leetStr;
}

