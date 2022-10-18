#include "main.h"


/**
* print_alphabet_x10 - function for printing 10 sets of the alpabets
*
*/

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
