#include "main.h"

/**
* puts_half - this print half of a string.
* @str: parameter
*/
void puts_half(char *str)
{
	int count = 0, id;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		id = count / 2;
	else
		id = (count - 1) / 2;

	for (id++; id < count; id++)
		_putchar(str[id]);
	_putchar('\n');
}
