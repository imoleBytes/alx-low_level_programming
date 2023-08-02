/**
* _strlen_recursion - fuc returns the lenght of a string recursively
* @s: string
* Return: int
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}



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
