#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return : No result
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;
			if (j != 0)
			{
				_putchar(' ');
			}
			if (k <= 9)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
			if (j == 9)
			{
				_putchar('\n');
			}
		}
	}
}	