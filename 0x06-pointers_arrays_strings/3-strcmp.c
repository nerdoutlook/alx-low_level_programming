#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: Returns 1 if true and 0 is false
 */
int _strcmp(char *s1, char *s2)
{
	int i, len, len2;

	i = 0;
	while (s1[i] != '\0')
		i++;

	len = i;
	i = 0;
	while (s2[i] != '\0')
		i++;
	len2 = i;

	len2 = len2 + 0;
	for (i = 0; i < len; i++)
	{
		if (s1[i] > s2[i])
			return (s2 - s1);
		if (s2[i] < s1[i])
			return (s1 - s2);
	}
	return (0);
}
