#include "main.h"



/**
 * palin - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolena
 */

int palin(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (palin(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palin(s, len - 1));
}
