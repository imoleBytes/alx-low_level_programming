

int sqroot(int n, int i);

/**
* _sqrt_recursion - fuc to calc the natural sqroot of an int
* @n: int number
* Return: int
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqroot(n, 0));

}


/**
* sqroot - fuc to calc the natural sqroot of an int
* @n: int number
* @i: count int
* Return: int
*/

int sqroot(int n, int i)
{
	if (n == 0 || n == 1)
		return (n);
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqroot(n, i + 1));
}
