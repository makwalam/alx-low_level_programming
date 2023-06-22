#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 ten times.
 */
void more_numbers(void)
{
	int i, j;
	char num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			num = (j >= 10) ? ('0' + (j / 10)) : ('0' + j);
			if (j < 15)
			{
				_putchar(num);
				if (j == 14)
					_putchar('\n');
			}
		}
	}
}

