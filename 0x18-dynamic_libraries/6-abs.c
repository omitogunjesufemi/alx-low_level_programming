/**
 * _abs - computes the absolute value of an integer
 * @j: character to be computed
 * Return: int
 */
int _abs(int j)
{
	if (j < 0)
	{
		int result =  j * -1;

		return (result);
	}
	return (j);
}
