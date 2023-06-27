#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int password_length = PASSWORD_LENGTH;
    char password[PASSWORD_LENGTH + 1];

    srand(time(0));

    for (int i = 0; i < password_length; i++)
    {
        password[i] = '!' + (rand() % ('~' - '!'));
    }

    password[password_length] = '\0';

    printf("%s\n", password);

    return 0;
}

