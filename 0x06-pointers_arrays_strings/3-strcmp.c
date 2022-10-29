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
	
	if (len1 > len2)
		break;
	if (len != len2)
		return (1);
	for (i = 0; i < len; i++)
	{
		if (s1[i] != s2[i])
			return (1);
	}
	return (0);
}
