#include "main.h"

char *_strchr(char *s, char c)
{

	int i, strlen;

	i = 0;
	while (s[i] != '\0')
		i++;
	strlen = i;
	
	for (i = 0; i <= strlen; i++)
	{
		if (s[i] == c)
			return (s + i);
		else
			continue;
	}	
	return (NULL);
}
