#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j == 0)
				_putchar('0'); /* Print the first zero of each row */
			else if (result < 10)
				_putchar(' '); /* Print a space before single-digit numbers */
			else
				_putchar((result / 10) + '0'); /* Print the tens digit */

			_putchar((result % 10) + '0'); /* Print the ones digit */

			if (j != 9)
			{
				_putchar(','); /* Print the comma separator */
				_putchar(' '); /* Print a space after each number */
			}
		}

		_putchar('\n'); /* Move to the next line after each row */
	}
}

