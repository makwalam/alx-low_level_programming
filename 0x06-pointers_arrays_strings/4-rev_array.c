#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers
 * @n: The number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

/**
 * print_array - Prints an array of integers
 * @a: The array of integers
 * @n: The number of elements in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	int size = sizeof(a) / sizeof(int);

	printf("Original array: ");
	print_array(a, size);

	reverse_array(a, size);

	printf("Reversed array: ");
	print_array(a, size);

	return (0);
}

