#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: determines length of diagonal line
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		int i,j;

		for (i = 1; i < n; i++)
		{
			for (j = 1; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
