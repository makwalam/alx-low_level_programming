#include "main.h"

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* 0 and 1 are not prime numbers */

	/* Check if n is divisible by any number from 2 to the square root of n */
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0); /* n is divisible by i, so it's not prime */
	}

	return (1); /* n is prime */
}

