#include "main.h"

/**
 * print_last_digit - prints the last digit
 * Of any given number.
 * @a: The number to be evaluated.
 *
 * Return: Last digit of the given number.
 */
int print_last_digit(int a)
{
	int n, q;

	if (a >= 0)
	{
		n = a % 10;
		n = _putchar('0' + n);
		return (n);
	}
	else
	{
		n = ((a * a) / (-(a)));
		q = n % 10;
		n = _putchar('0' + q);
		return (q);
	}
}
