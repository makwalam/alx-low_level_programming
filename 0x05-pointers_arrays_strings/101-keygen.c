#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * generate_password - Generates a random password
 * @password: The buffer to store the generated password
 */
void generate_password(char *password)
{
    int i;
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[PASSWORD_LENGTH] = '\0';
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1];

    generate_password(password);
    printf("%s\n", password);

    return (0);
}

