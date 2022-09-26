/**
 * _memcpy - a function that fills memory with a constant byte
 * @dest: the memory area pointer
 * @src: copies n bytes from memeory area
 * @n: the number of bytes to fill the memory area
 * Return: char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}

	return (dest);
}
