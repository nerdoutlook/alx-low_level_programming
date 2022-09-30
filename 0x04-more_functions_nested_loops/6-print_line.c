#include "main.h"

/**
 * print_line - draws a straight line on the terminal
 * @n: determines length of line
 *
 * Return: nothing
 */
void print_line(int n)
{
	char l = '_';
	int i;

	if (n == 0 || n < 0)
	{
		_putchar('\r');
		_putchar('\n');
	}
	if (n > 0)
	{
		i = 0;
		while (n > i)
		{
			_putchar(l);
			n--;
		}
		_putchar('\r');
		_putchar('\n');
	}
}
