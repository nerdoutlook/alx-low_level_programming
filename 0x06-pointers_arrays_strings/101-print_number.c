#include "main.h"

/**
 * print_number - prints to stdout any given integer
 * @n: integer to be printed
 *
 * Return: void.
 */
void print_number(int n)
{
	if (n < 0 && n <= -9)
	{
		_putchar(n + '3');
	}

	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}

	if (n >= 10 && n < 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}

	if (n >= 100  && n <= 999)
	{
		_putchar((n / 10) / 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) % 10 + '0');
	}

	if (n >= 1000 && n <= 9999)
	{
		_putchar(((n / 10) / 10) / 10 + '0');
		_putchar(((n / 10) / 10) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}
}

