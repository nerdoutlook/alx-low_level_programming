#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: string pointer variable
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		/* _putchar(s[i]);*/
		i++;
	}
	return (i);
}
