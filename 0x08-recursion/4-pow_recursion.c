/**
 * _pow_recursion - raises x to power y.
 * @x:base.
 * @y:exponent.
 *
 * Return: result of x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
