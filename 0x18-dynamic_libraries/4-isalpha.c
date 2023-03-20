/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: int
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 172))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
