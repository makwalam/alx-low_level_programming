#include <stdio.h>

#define MAX_TERMS 98

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib[MAX_TERMS];
	int i;

	fib[0] = 1;
	fib[1] = 2;

	printf("%lu, %lu", fib[0], fib[1]);

	for (i = 2; i < MAX_TERMS; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf(", %lu", fib[i]);
	}

	printf("\n");

	return 0;
}

