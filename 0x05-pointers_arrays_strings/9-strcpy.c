#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: destination pointer variable to copy string to
 * @src: source pointer variable to copy string form
 *
 * Return: value of 'dest' variable
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
		i++;
	i = i + 1;
	for (j = 0; j <= i; j++)
		dest[j] = src[j];
	return (dest);
}
