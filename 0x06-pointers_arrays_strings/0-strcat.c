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

	len = get_str_length(dest);
	/*len = 0;
	while (dest[len] != '\0')
		len++;
	*/
	for (i = 0; dest[i] != '\0'; i++)
	{
		j = src[i];
		dest[len + i] = j;
	}

	len = get_str_length(dest);
	/*while (dest[len] != '\0')
		len++;
	*/
	dest[len + 1] = '\0';
	return (dest);
}
