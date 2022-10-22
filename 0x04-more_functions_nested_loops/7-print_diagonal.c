#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: determines length of diagonal line
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int width, i, j, length;

	if (size <= 0)
		break;
	width = 1;
	length = n;
	for (i = 0; i < length; i++)
	{
		j = 1;
		while (j <= width)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		width++;
	}

}

