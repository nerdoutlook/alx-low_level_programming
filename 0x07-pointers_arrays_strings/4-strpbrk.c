#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing set of bytes
 *
 * Return: A pointer to s[i] or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, k, l;

	i = 0;
	while (s[i] != '\0')
		i++;

	j = 0;
	while (accept[j] != '\0')
		j++;

	for (k = 0; k < i; k++)
	{
		for (l = 0; l < j; l++)
		{
			if (s[k] == accept[l])
				return (s + k);
		}
	}
	return (0);
}
