#include "main.h"

/**
 * more_numbers - Print 10 times the  numbers since 0 to 14
 * Return 10 times of the number since 0 to 14
 */

void more_numbers(void)

{

	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j < 10)
	_putchar('0' + j);
	else
	{
	_putchar('0' + (j / 10));
	}
	_putchar('0' + (j % 10));
	}
	_putchar('\n');
	}
}
