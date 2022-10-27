#include "main.h"

/**
 * _strncat - contains two strings with n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of src would be used
 *
 * Return: Pointer to dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;
	char j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	len = i;
	for (i = 0; i < n && src[i] != '\0'; i++)
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
