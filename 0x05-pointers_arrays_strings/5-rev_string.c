#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string
 * @s: pointer to string to be reversed
 */

void rev_string(char *s)
{
	int i, len;
	char k;

	len = 0;
	while (s[len] != '\0')
	{
		if (*s == '\n' || *s == '\0')
			break;
		len++;
	}

	len = len - 1;
	for (i = 0; i < len; i++)
	{
		k = s[i];
		s[i] = s[len];
		s[len] = k;
		len--;
	}
	_putchar('\n');
}
