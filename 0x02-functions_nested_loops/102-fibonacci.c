#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int num1 = 1, num2 = 2, next;

	printf("%lu, %lu", num1, num2);

	for (i = 3; i <= 50; i++)
	{
		next = num1 + num2;
		printf(", %lu", next);
		num1 = num2;
		num2 = next;
	}

	printf("\n");

	return (0);
}

