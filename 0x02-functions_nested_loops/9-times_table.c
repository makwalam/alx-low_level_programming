#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Print the first column */
		_putchar(',');

		for (column = 1; column <= 9; column++)
		{
			_putchar(' ');

			result = row * column;

			if (result >= 10)
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			else
			{
				_putchar(' ');
				_putchar('0' + result);
			}

			if (column < 9)
				_putchar(',');
		}

		_putchar('\n');
	}
}
