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
	int i;
	char j;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		j = src[i];
		dest[i] = j;
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
