#include <stdio.h>

/**
* main - Starts here
*
* Return: Always 0
*/

int main(void)
{
	char c;
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
