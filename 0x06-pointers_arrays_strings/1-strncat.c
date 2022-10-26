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
	int len, i;
	char j;

	len = get_str_length(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		j = src[i];
		dest[len + i] = j;
	}
	len = get_str_length(dest);
	dest[len + 1] = '\0';
	return (dest);
}
