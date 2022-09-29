#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 *
 * Return: Returns 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				_putchar((i * j) + '0');
			}
			if (j == 1)
			{
				_putchar(' ');
				_putchar((i * j) + '0');
			}
			if ((i * j) <= 9 && j >= 2)
			{
				_putchar(' ');
				_putchar((i * j) + '0');
			}
			if ((i * j) >= 10)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
			_putchar('\n');
	}
}
