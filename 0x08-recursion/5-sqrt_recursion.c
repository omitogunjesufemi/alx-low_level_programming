/**
 * check - check for the perfect squares of the number
 * @factor: the number for multiplication
 * @number: the number whose square root is to be found
 * Return: int
 */
int check(int factor, int number)
{
	if (factor * factor ==  number)
		return (factor);

	if (factor * factor > number)
		return (-1);

	return (check(factor + 1, number));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (check(1, n));
}
