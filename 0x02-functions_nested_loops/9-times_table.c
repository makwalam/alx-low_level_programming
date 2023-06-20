#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0'); /* Print the first column (0) */

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			result = i * j;

			if (result < 10)
				_putchar(' '); /* Extra space for single-digit numbers */

			_putchar('0' + result);
		}

		_putchar('\n');
	}
}

