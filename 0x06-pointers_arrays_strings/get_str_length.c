#include "main.h"

/**
 * get_str_length - gets length of string
 * @dest: string to be checked
 *
 * Return: length of sting
 */
int get_str_length(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
