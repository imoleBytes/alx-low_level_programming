
/**
* int_index - func starts
* @array: array of int
* @size: int size of arr
* @cmp: func pointer
* Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int value;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		value = cmp(array[i]);
		if (value != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
