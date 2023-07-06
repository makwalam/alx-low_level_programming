#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return 0; /* 0 and 1 are not prime numbers */

	return check_prime(n, 2);
}

/**
 * check_prime - Recursive helper function to check if a number is prime.
 * @n: The number to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int check_prime(int n, int divisor)
{
	if (divisor * divisor > n)
		return 1; /* n is prime */

	if (n % divisor == 0)
		return 0; /* n is divisible by divisor, so it's not prime */

	return check_prime(n, divisor + 1);
}

