#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: no of bytes to be copied btw dest & src
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	int len;

	len = (int)sizeof(dest) / (int)sizeof(dest[0]);

	if (len <= (int)n)
	{
		for (i = 0; i < n; i++)
		{
			dest[len + i] = src[i];
		}
	}
	return (dest);
}
