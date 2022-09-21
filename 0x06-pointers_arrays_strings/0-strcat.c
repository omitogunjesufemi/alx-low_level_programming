int str_len(char *str);

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: concatenated char
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len;

	len = str_len(dest);
	for (i = len, j = 0; src[j] != '\0'; i++, j++)
	{
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
	int count = 0;

	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}
