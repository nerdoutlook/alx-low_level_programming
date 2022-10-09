#include "main.h"

/**
 * print_rev - prints a string in reverse order.
 * @s: strint to be printed
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
