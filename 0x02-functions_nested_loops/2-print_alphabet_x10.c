#include "main.h"

/**
* print_alphabet_x10 - Function starts here
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 11; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
