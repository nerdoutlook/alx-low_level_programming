#include <stdio.h>

int main()
{
	char lowerCase = 'a';
	char upperCase = 'A';
	char nl = '\n';

	for (lowerCase; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);

	for (upperCase; upperCase <= 'Z'; upperCase++)
		putchar(upperCase);
	

	putchar(nl);

	return (0);
}
