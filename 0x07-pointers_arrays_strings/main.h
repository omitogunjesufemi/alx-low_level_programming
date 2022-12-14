void _putchar(char c);

/**
 * _memset - a function that fills memory with a constant byte
 * @s: the memory area pointer
 * @b: the constant byte
 * @n: the number of bytes to fill the memory area
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - a function that fills memory with a constant byte
 * @dest: the memory area pointer
 * @src: copies n bytes from memeory area
 * @n: the number of bytes to fill the memory area
 */
char *_memcpy(char *dest, char *src , unsigned int n);

/**
 * _strchr - a function that locates a character in a string
 * @s: the string to search
 * @c: character to find
 * Return: a pointer to the first occurence of the character
 */
char *_strchr(char *s, char c);

/**
 * _strspn - a function that get the length of a prefix substring
 * @s: string to check
 * @accept: pattern to use
 * Return: length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - a function that locates the first occurence
 *            in the string s of any of the bytes in the
 *            string accept
 * @s: string
 * @accept: pattern to use
 * Return: a pointer to the byte in s that matches one of the bytes
 *         or return NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - a function that locates a substring
 * @haystack: the main string
 * @needle: the pattern
 * Return: a pointer to the beginning byte of the substring
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - a function that prints the chessboard
 * @a: array
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: the square matrix
 * @size: size of the matrix [row][col]
 */
void print_diagsums(int *a, int size);

/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to a pointer
 * @to: a pointer to the value
 */
void set_string(char **s, char *to);
