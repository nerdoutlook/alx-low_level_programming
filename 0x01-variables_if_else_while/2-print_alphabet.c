#include <stdio.h>

int main()
{
	char ch = 'a';
	char nl = '\n';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar(nl);
	return (0);

}
