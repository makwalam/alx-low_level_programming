#include "main.h"

/**
 * is_prime_number - Check if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return 0;
    return is_prime_helper(n, n - 1);
}

/**
 * is_prime_helper - Helper function to check if a number is prime
 * @n: The number to check
 * @div: The divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int div)
{
    if (div == 1)
        return 1;
    if (n % div == 0)
        return 0;
    return is_prime_helper(n, div - 1);
}

