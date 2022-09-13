#include <stdio.h>

int main()
{
	char lowerCase = 'a';
	char upperCase = 'A';
	char nl = '\n';

	while (lowerCase <= 'z')
	{
		if (lowerCase != 'q' && lowerCase != 'e')
		{
			putchar(lowerCase);
		}
		lowerCase++;
	}

	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}
	
	putchar(nl);

	return (0);
}
