#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int num1 = 1, num2 = 2, next;
	int i;

	printf("%lu, %lu", num1, num2);

	for (i = 3; i <= 98; i++)
	{
		next = num1 + num2;
		printf(", %lu", next);
		num1 = num2;
		num2 = next;
	}

	printf("\n");

	return (0);
}

