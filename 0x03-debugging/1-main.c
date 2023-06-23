#include <stdio.h>

/**
 * main - Causes an infinite loop
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
		/* Commenting out the increment line to fix the infinite loop */
		/* i++; */
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
