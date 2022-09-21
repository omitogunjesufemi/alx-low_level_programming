int str_len(char *str);

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: concatenated char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	len = str_len(dest);
	for (i = len, j = 0; j < n; i++, j++)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
	}
	return (dest);
}

/**
 * str_len - get length of string
 * @str: string
 * Return: string length
 */
int str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
