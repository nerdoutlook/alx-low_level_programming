#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: String
 * @accept: String
 *
 * Return: number of bytes in prefix segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i, l, j, k;

	n = 0;
	while (s[n] != ',')
		n++;
	k = 0;
	while (accept[k] != '\0')
		k++;

	j = 0;
	for (i = 0; i < n; i++)
	{
		for (l = 0; l < k; l++)
		{
			if (s[i]  == accept[l])
				j++;
		}
	}
	return (j);
}
