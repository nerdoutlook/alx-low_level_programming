#include <stdio.h>

int main()
{
	int count = 122;
	char nl = '\n';

	while(count >= 97)
	{
		putchar(count);
		count--;
	}
		
	putchar(nl);
	return (0);

}
