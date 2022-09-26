/**
 * _strchr - a function that locates a character in a string
 * @s: the string to search
 * @c: character to find
 * Return: a pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int length_s, i;
	static char *result = 0;

	length_s = 0;
	while (s[length_s] != '\0')
	{
		length_s++;
	}

	for (i = 0; i < length_s; i++)
	{
		if (s[i] == c)
		{
			result = &s[i];
			break;
		}
	}
	return (result);
}
