#include <stdio.h>
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	/* Calculate the sum of the first diagonal (top-left to bottom-right) */
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}

	/* Calculate the sum of the second diagonal (top-right to bottom-left) */
	for (i = 0; i < size; i++)
	{
		sum2 += *(a + i * size + (size - i - 1));
	}

	/* Print the sums */
	printf("%d, %d\n", sum1, sum2);
}

