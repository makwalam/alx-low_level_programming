#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	int num1 = 1, num2 = 2, next, count;

	printf("%d, %d, ", num1, num2);

	for (count = 3; count <= n; count++)
	{
		next = num1 + num2;
		printf("%d", next);

		if (count != n)
			printf(", ");

		num1 = num2;
		num2 = next;
	}

	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	print_fibonacci(98);

	return (0);
}

