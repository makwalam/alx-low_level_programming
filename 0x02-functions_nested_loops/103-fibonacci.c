#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the sum of even-valued terms in the Fibonacci sequence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int num1 = 1, num2 = 2, next;
	unsigned long int sum = 2;  /* Start with 2 since num2 is even */

	while (num2 <= 4000000)
	{
		next = num1 + num2;
		if (next % 2 == 0)
			sum += next;
		num1 = num2;
		num2 = next;
	}

	printf("%lu\n", sum);

	return (0);
}

