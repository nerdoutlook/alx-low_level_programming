#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to be operated on
 *
 * Return: str after string operation
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (*str == EOF)
			break;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		if (str[i] == ' ' || str[i] == '.' || str[i] == '?')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		if (str[i] == '\n' || str[i] == '\t')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		else
			str[i] =  str[i];
	}
	return (str);
}
