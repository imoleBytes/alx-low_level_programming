#include <stdio.h>

/**
* main - Program starts here
*
* Return: Always 0
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
