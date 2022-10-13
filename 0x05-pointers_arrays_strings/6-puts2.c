#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: string to be printed
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;

	j = 0;
	while (j < i)
	{
		if (str[j] != '\\' && str[j + 1] != '0')
			_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
