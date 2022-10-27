#include "main.h"

/**
 * _strncpy - copies the string pointed to by 'src', including '\0'
 *  to the buffer pointed to by 'dest'
 *  @dest: destination string
 *  @src: source string
 *  @n: number of byters of 'src' to be copied
 *
 *  Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len;
	char j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	len = i;

	for (i = 0; i < n; i++)
	{
		j = src[i];
		dest[len + i] = j;
	}

	while (dest[i] != '\0')
		i++;
	len = i;
	dest[len + 1] = '\0';
	return (dest);
}
