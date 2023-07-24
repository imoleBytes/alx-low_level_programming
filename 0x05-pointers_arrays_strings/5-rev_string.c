

/**
* rev_string - reverse string
* @s: string
*/

void rev_string(char *s)
{
	int len = 0;
	char temp;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	/*len--;*/

	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		i++;
	}
}
