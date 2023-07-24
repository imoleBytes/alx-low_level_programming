
/**
* print_rev - func for reverse
*@s: string
*/

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\n')
	{
		count++;
	}
	count--;

	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
