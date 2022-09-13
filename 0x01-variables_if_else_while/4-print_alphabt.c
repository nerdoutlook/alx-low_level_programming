#include <stdio.h>

int main()
{
	char lowerCase = 'a';
	char nl = '\n';

	while (lowerCase <= 'z')
	{
		if (lowerCase != 'q' && lowerCase != 'e')
		{
			putchar(lowerCase);
		}
		lowerCase++;
	}
	putchar(nl);

	return (0);
}
