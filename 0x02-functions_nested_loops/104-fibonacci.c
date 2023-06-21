#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers
 *              without using external libraries or long long
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    unsigned int fib1 = 1, fib2 = 2, fib3;

    printf("%u, %u", fib1, fib2);

    for (i = 2; i < 98; i++)
    {
        fib3 = fib1 + fib2;
        printf(", %u", fib3);

        fib1 = fib2;
        fib2 = fib3;
    }

    printf("\n");

    return (0);
}

