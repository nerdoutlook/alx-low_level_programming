#include "main.h"

/**
 * print_triangle - draws a right angled triangle
 * @size: determines length of the triangle
 *
 * Return: nothing
 */
void print_square(int size)
{
	int i, j, length;

	if (size <= 0)
		_putchar('\n');

	length = size;
	for (i = 1; i <= length; i++)
	{
		j = 1;
		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
	}
}
