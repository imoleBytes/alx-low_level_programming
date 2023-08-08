#include <stdlib.h>

/* -----------------Helper functions------------------- */

/**
* stringlen - evaluate lenght of string
* @str: string
* Return: int
*/

int stringlen(char *str)
{
	unsigned int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
* numberOfWords - count the number of words in a string
* @s: string
* Return: int
*/
int numberOfWords(char *s)
{
	int words, space, i;

	space = 0;
	words = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			space = 0;
		else if (space == 0)
		{
			space = 1;
			words++;
		}
	}
	return (words);
}

/** ---------------------helper functions ends here----------*/


/**
* strtow - this func splits a string into words
* @str: string
* Return: pointer to an array of strings
*/
char **strtow(char *str)
{
	char **dest, *tmp;
	int i, k = 0, len, words, c = 0, start, end;

	len = stringlen(str);

	words = numberOfWords(str);
	if (words == 0)
		return (NULL);

	dest = (char **) malloc(sizeof(char *) * (words + 1));
	if (dest == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				dest[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	dest[k] = NULL;

	return (dest);
}
