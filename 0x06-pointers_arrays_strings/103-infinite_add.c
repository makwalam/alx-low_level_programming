#include <stdio.h>
#include <stdlib.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result string, or 0 if the result cannot fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len1, len2, carry, sum;

	/* Find the lengths of the input numbers */
	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	if (len1 >= size_r || len2 >= size_r)
	{
		/* If the result cannot fit in r, return 0 */
		return 0;
	}

	/* Initialize the variables */
	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		/* Add the digits at corresponding positions */
		sum = carry;
		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}

		/* Calculate the carry and the current digit */
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
		k++;
	}

	/* Terminate the result string */
	r[k] = '\0';

	/* Reverse the result string */
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}

	return r;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
	char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
	char r[100];
	char r2[10];
	char r3[11];
	char *res;

	res = infinite_add(n, m, r, 100);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}

	n = "1234567890";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}

	n = "999999999";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s +

