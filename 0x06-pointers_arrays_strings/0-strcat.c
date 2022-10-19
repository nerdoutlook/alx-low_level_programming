#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest:destination string
 * @src: source string
 *
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, k, l, len, len2;

	len = 0;
	while (*dest != '\0')
	{
		len++;
		dest++;
	}
	while (*src != '\0')
	{
		len2++;
		src++;
	}

	k = len;
	l = len2;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[k + i] = src[i];
		if (k + i > l)
			break;
	}
	dest[k + i] = '\0';
	return (dest);
}
