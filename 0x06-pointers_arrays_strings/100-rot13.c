#include "main.h"

/**
 * rot13 - Encodes a string ustr[i]ng rot13
 * @str: pointer variable to string.
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int k, l;
	char input[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
			 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
			'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
			'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
			'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char output[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
			'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r',
			's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c',
			'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	for (k = 0; str[k] != '\0'; k++)
	{
		for (l = 0; l < 52; l++)
		{
			if (str[k] == input[l])
				str[k] = output[l];
		}
	}
	return (str);
}
