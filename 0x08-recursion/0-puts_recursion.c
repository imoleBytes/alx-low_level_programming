#include "main.h"


/**
* _puts_recursion - functio to print a string
* @s: a pointer to the string
*/
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);

	_puts_recursion(&s[1]);
}
