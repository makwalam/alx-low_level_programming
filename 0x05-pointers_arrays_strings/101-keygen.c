#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int password_length = 12; /* Define the desired password length */
	char password[password_length + 1]; /* Allocate space for the password (+1 for null terminator) */

	srand(time(0)); /* Seed the random number generator with the current time */

	/* Generate a random password */
	for (int i = 0; i < password_length; i++)
	{
		/* Generate a random character between '!' and '~' */
		password[i] = '!' + (rand() % ('~' - '!'));
	}

	password[password_length] = '\0'; /* Add null terminator to the end of the password */

	printf("%s\n", password); /* Print the generated password */

	return (0);
}

