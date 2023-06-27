#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    int sum = 0;
    char password[84];

    srand(time(0));

    for (i = 0; i < 84; i++)
    {
        password[i] = rand() % 94 + 33; /* ASCII printable characters */
        sum += password[i];
    }

    password[i] = '\0';

    /* Adjust the last character to make the sum equal to 2772 */
    password[83] += 2772 - sum;

    printf("%s\n", password);

    return 0;
}

