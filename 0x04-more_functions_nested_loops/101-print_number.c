#include "main.h"

/**
 * print_number - prints any given integer
 * Irespective of sign.
 * @n: Integer to be printed
 *
 * Return: Nothing
 */
void print_number(int n)
{
	char neg = '-';

	if (n < 0 && n <= -9)
	{
		_putchar(neg);
		n = -n;
	}
	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	if (n >= 10 && n <= 99)
	{
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}
	if (n >= 100 && n <= 999)
	{
		_putchar((n / 10) / 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}
	if (n >= 1000 && n <= 9999)
	{
		_putchar(((n / 10) / 10) / 10 + '0');
		_putchar(((n / 10) / 10) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 10) + '0');
	}
}
