#include "main.h"

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		/* _putchar(s[i]);*/
		i++;
	}
	return (i);
}
