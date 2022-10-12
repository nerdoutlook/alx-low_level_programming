#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be printed
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, n, length_of_string, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	length_of_string = i + 1;

	n = (length_of_string - 1) / 2;
	for (j = 0; j <= n; j++)
	{
		if (*str == '\0' || *str == '\n')
			break;
		if (length_of_string % 2 != 0)
			_putchar(str[n + j]);
		else
			_putchar(str[j]);
	}
}
