/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: concatenated char
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: concatenated char
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copy two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: copied char
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compare two strings
 * @s1: string1
 * @s2: string
 * Return: concatenated char
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - change all lowercase to uppercase
 * @s: string to change
 * Return: uppercase string
 */
char *string_toupper(char *s);

/**
 * cap_string - capitalize all words of a string
 * @s: string to capitalize
 * Return: capitalized string
 */
char *cap_string(char *s);

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s);

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: encoded
 */
char *rot13(char *s);