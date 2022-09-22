#include "main.h"

/**
 * print_sign - Cheecks and prints the sign of a number
 *
 * @n: Number to be evaluated.
 *
 * Return: 1 if > 0, 0 if == 0 and -1 if < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	else
		return (-1);
}
