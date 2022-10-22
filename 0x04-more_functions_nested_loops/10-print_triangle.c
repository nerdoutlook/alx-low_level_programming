#include "main.h"

/**
 * print_triangle - draws a right angled triangle
 * @size: determines length of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j, k, length, space_length, hash_length;

	if (size == 0)
		_putchar('\n');

	length = size;
	for (i = 1; i <= length; i++)
	{
		j = 1;
		space_length = size - i;
		while (j <= space_length)
		{
			_putchar(' ');
			j++;
		}
		k = 1;
		hash_length = size - space_length;
		while (k <= hash_length)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
	}
}
