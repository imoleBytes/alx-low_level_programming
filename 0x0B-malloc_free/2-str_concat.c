#include <stdlib.h>



/**
* stringlen - lenght of string
* @str: string
* Return: int
*/
int stringlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* str_concat - func to concatenate 2 strings
* @s1: pointer to str1
* @s2: pointer to string2
* Return: a pointer to array
*/
char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int i, j, len;

	/*If the array is empty*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = (stringlen(s1) + stringlen(s2) + 1);

	array = (char *) malloc(len * sizeof(char));

	if (array == 0)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(array + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(array + i) = *(s2 + j);
		i++;
	}

	return (array);
}
