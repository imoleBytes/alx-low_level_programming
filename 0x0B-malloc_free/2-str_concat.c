#include <stdlib.h>



/**
* str_concat - func to create a block of memmory and fill it with string
* @s1: pointer to str1
* @s2: pointer to string2
* Return: a pointer to array
*/
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i;
	int count;
	int count1 = 0;
	int count2 = 0;

	/*
	* if (str == NULL)
	*	return (NULL);
	*/
	while (s1[count1] != '\0')
	{
		count1++;
	}
	while (s2[count2] != '\0')
	{
		count2++;
	}
	count = count1 + count2 + 1;
	array = malloc(sizeof(*s1) * count);
	if (array != NULL)
	{
		for (i = 0; i <= count1; i++)
		{
			array[i] = s1[i];
		}
		i = 0;
		for (i = 0; i <= count2; i++)
		{
			array[count1 + 1 + i] = s2[i];
		}
		array[count] = '\0';
		return (array);
	}
	return (NULL);
}
