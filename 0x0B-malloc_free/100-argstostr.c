#include <stdlib.h>

/**
* stringlen - calculates lenght of string
* @str: the string
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
* argstostr - This function stringify all the arguments passed to a program
* @ac: argument count (int)
* @av: pointer to list of strings (pointer to pointers)
* Return: dest (pointer to string)
*/
char *argstostr(int ac, char **av)
{
	int i;
	char *dest;
	int lenghtOfDest;
	int sumOfLenght = 0;
	int j;
	int a = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* get the lenght of each of the arguments, first argument not inclusive*/
	for (i = 1; i < ac; i++)
	{
		sumOfLenght += stringlen(av[i]);
	}
	/* adding ac for \n on each argument + 1 '\0'*/
	lenghtOfDest = sumOfLenght + ac;

	dest = malloc(sizeof(char *) * lenghtOfDest);
	if (dest == NULL)
		return (NULL);

	/*fill dest with each argument*/
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			dest[a] = av[i][j];
			a++;
			j++;
		}
		dest[a] = '\n';
		a++;
	}
	return (dest);
}
