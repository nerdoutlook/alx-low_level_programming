#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: natural number where iteraton starts
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i;

	i = 98;
	if (n == 0)
	{
		while (n <= i-1)
		{
			if (n >= 0 && n <= 9)
				_putchar((n % 10) + '0');
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n != i)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	if (n == i)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n > i)
	{
		while (n >= i)
		{
			if( n >= 100)
			{
				_putchar(((n / 10) / 10) + '0');
				_putchar(((n / 10) % 10) + '0'); 
				_putchar((n % 10) + '0');
			}
			if (n == 99 || n < i)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n != i)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	
	if (n < i)
	{
		while (n > 0 && n <= i)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (n != i)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		for (n = n; n <= 0; n++)
		{
			_putchar('-');
			_putchar(n + '0');
			_putchar(n + '0');
			if (n != i)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		for (n = n; n <= 98; n++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (n != i)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');

}
