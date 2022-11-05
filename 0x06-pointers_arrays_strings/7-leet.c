#include "main.h"

/**
 * leet - Encodes a string with 1337(leet)
 * @str: string to be encoded
 *
 * Return: returns encoded string
 */
char *leet(char *str)
{
	int i, j;
	char leet_encd[] = {'a', 'e', 'o', 't', 'l'};
	char leet_encd_num[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; ++j)
		{
			if (str[i] == leet_encd[j] || str[i] - 32 == leet_encd[j] ||
					str[i] + 32 == leet_encd[j])
				str[i] = leet_encd_num[j];
		}
	}
	return (str);
}
