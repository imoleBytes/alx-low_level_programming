#include "main.h"
#include <stdlib.h>

/**
* _atoi_digit - functio to convert char to int.
* @c: char
* Return: integer.
*/
int _atoi_digit(char c)
{
	unsigned int re;

	if (c <= '9' && c >= '0')
		re = c - '0';
	return (re);
}

/**
* _isNumber - check if a string is a num.
* @argv: Pointer
* Return: 0
*/
int _isNumber(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
		if (argv[i] < 48 || argv[i] > 57)
			return (1);
	return (0);
}

/**
*_calloc - allocate array
* @nmemb: number of elements.
* @size: size of element.
* Return: pointer
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int i;

	t = malloc(size * nmemb);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		t[i] = '0';

	return (t);
}

/**
* mul_array - multiply
* @a1: arr.
* @len1: int.
* @a2:  char.
* @a3: array.
* @lena: int
* Return: pointer
*/

void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0, i, k;

	k = lena;
	for (i = len1 - 1; i >= 0 ; i--)
	{
		mul += (a1[i] - '0') * (a2 - '0') + (a3[k] - '0');
		a3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}

		while (mul != 0)
		{
			mul += a3[k] - '0';
			a3[k] = (mul % 10) + '0';
			mul /= 10;
			k--;
		}

	return (a3);
}
/**
* print_array - print all digits
* @nb: number of elements
* @a: array
*/
void print_array(char *a, int nb)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < nb)
	{
		i++;
	}
	for (; i < nb; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}

/**
* main - print the multiplication
* @argc: array
* @argv: array.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int i, c, len1, len2, lenres;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tabres;

	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(E[i]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
	;
	for (len2 = 0; argv[2][len2]; len2++)
	;
	lenres = len1 + len2;
	tabres = _calloc(lenres, sizeof(int));
	if (tabres == NULL)
	{
		free(tabres);
		return (0);
	}
	for (i = len2 - 1, c = 0; i >= 0; i--)
	{
	tabres = mul_array(argv[1], len1, argv[2][i], tabres, (lenres - 1 - c));
	c++;
	}
	print_array(tabres, lenres);
	free(tabres);
	exit(EXIT_SUCCESS);
	return (0);
}
