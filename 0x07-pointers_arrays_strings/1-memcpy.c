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
	unsigned int j;

	unsigned int length;

	length = (int)sizeof(dest) / (int)sizeof(dest[0]);;

	for (j = 0; j < length; j++)
	{
		if (!(j > n))
			dest[j] = src[j];
	}
	return (dest);
}
