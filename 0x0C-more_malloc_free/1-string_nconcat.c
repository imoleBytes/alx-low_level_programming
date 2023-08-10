#include "main.h"

/**
* string_nconcat - concat 2 strings.
* @s1: string
* @s2: string
* @n: int
* Return: char pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size1 = 0, size2 = 0, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n = size2;
	ptr = malloc((size1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (0);

	for (a = 0; a < size1; a++)
	{
		ptr[a] = s1[a];
	}

	for (; a < (size1 + n); a++)
	{
		ptr[a] = s2[a - size1];
	}
	ptr[i] = '\0';

	return (ptr);
}
