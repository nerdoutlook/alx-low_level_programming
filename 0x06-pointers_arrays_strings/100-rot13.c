#include "main.h"

/**
 * rot13 - Encodes a string ustr[i]ng rot13
 * @str: pointer variable to string to be encoded
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (str[k] >= 'A' && str[k] <= 'M')
			str[k] = str[k] + 13;
		else if (str[k] >= 'N' && str[k] <= 'Z')
			str[k] = str[k] - 13;
		else if (str[k] >= 'a' && str[k] <= 'm')
			str[k] = str[k] + 13;
		else if (str[k] >= 'n' && str[k] <= 'z')
			str[k] = str[k] - 13;
	}
	return (str);
}
