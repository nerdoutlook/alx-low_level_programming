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
	int i, k, len;

	len = 0;
	while (*dest != '\0')
	{
		len++;
		dest++;
	}

	k = len;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[k + i] = src[i];

	return (dest);
}
