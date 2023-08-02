/**
* _strlen_ - func returns the lenght of a string recursively
* @s: string
* Return: int
*/

int _strlen_(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_(s + 1));
}



/**
 * palin - palindrome
 * @s: pointer to string
 * @l: position
 * Return: int
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
 * is_palindrome - func to check palindrome
 * @s: string
 * Return: int
 */

int is_palindrome(char *s)
{
	int len = _strlen_(s);

	return (palin(s, len - 1));
}
