#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    while (i < 10)
    {
        putchar(i);
        /* Commenting out the line below to fix the infinite loop */
        /* i++; */
    }

    printf("Infinite loop avoided! \\o/\n");

    return (0);
}

