#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number.
 * @num: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of the number.
 */
long largest_prime_factor(long num)
{
	long factor = 2;

	while (factor * factor <= num)
	{
		if (num % factor == 0)
		{
			num /= factor;
		}
		else
		{
			factor++;
		}
	}

	if (num > factor)
	{
		factor = num;
	}

	return (factor);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	long number = 612852475143;
	long largest_factor;

	largest_factor = largest_prime_factor(number);

	printf("%ld\n", largest_factor);

	return (0);
}

