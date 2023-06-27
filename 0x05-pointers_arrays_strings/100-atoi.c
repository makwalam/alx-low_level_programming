/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Check for negative sign */
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	/* Iterate through the string */
	for (; s[i] != '\0'; i++)
	{
		/* Check for digits */
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* Update the result */
			result = result * 10 + (s[i] - '0');
		}
		/* Break if a non-digit character is found */
		else
		{
			break;
		}
	}

	/* Apply the sign to the result */
	result *= sign;

	return result;
}

