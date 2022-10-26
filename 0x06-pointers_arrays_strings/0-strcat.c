#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest:destination string
 * @src: source string
 *
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int len, i;
	char j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	len = i;
	for (i = 0; dest[i] != '\0'; i++)
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
