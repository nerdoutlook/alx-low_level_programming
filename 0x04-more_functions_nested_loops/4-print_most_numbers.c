#include "main.h"

/**
 * print_most_numbers - prints 0 t0 9 excluding 2 & 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
		{
			_putchar((i % 10) + '0');
		}
	}

	_putchar('\n');
}
