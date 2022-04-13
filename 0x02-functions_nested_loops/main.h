#include <stdio.h>

void _putchar()
{
	int i;
	char word[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
}
