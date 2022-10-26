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

	len = 0;
	len = get_str_length(dest);
	/*len2 = get_str_length(src);*/

	for (i = 0; i < n; i++)
	{
		j = src[i];
		dest[len + i] = j;
	}
	/*
	if (len2 < n)
	{
		for (i= len2; i <= n; i++)
		{
			j = ' ';
			dest[len + i] = j;
		}
	}*/
	len = get_str_length(dest);
	dest[len + 1] = '\0';
	return (dest);
}
