#include "main.h"


/**
* _print_rev_recursion - function to print a string in reverse
* @s: a pointer to the string
*/
void _print_rev_recursion(char *s)
{
	// int i = 0;

	if (s[0] != '\0')
	{
		_print_rev_recursion(&s[1]);
		_putchar(s[0]);
		return;
	}
}
