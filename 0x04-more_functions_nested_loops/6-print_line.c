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

	if (n <= 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar(l);
			n--;
		}
		_putchar('\n');
	}
}
