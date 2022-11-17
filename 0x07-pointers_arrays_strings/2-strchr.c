#include "main.h"

/**
 * _strchr - function to locare a character in a string
 * @s: String
 * @c: Character
 *
 * Return: pointer to s of c or NULL
 */
char *_strchr(char *s, char c)
{
	int i, strlen;
	int *null;

	null = NULL;
	i = 0;
	while (s[i] != '\0')
		i++;
	strlen = i;

	for (i = 0; i <= strlen; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (null);
}
