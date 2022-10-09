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
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
