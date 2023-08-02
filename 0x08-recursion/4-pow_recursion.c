

/**
* _pow_recursion - func that calc the x raised to power y
* @x: int x
* @y: int y
* Return: int
***/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
