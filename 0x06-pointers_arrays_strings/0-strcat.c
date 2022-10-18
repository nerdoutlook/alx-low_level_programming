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
	int i, k;
 

	k = get_str_length(dest);
	printf("k = %d\n", k);

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[k + i] = src[i];

	return (dest);
}
