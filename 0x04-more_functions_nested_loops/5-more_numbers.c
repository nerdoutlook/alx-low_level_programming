#include "main.h"

/**
 * more_numbers - prints 0 t0 9 10x
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i < 10)
			_putchar((i % 10) + '0');
		if (i >= 10)
			_putchar(((i / 10) + '0') + ((i % 10) + 0));
	}

	_putchar('\n');
}
