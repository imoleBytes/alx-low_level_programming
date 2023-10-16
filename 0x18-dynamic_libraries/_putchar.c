#include <unistd.h>

/**
* _putchar - this writes the character c to stdout
* @c: The character to print
*
* Return: 1. or -1 on error returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
