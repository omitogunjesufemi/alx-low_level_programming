#ifndef _MAIN_H_
#define _MAIN_H_

/**
 *_putchar - This is for printing characters
 * @c: character
 * Return: int
 */
int _putchar(char c);

/**
 * _islower - This checks for lowercase characters
 * @c: int
 * Return: int
 */
int _islower(int c);

/**
 * _isalpha - This checks for alphabets
 * @c: int
 * Return: int
 */
int _isalpha(int c);

/**
 * _abs - This returns the absolute of a value
 * @n: value
 * Return: unsigned value
 */
int _abs(int n);

/**
 * _isupper - This checks for uppercase characters
 * @c: int
 * Return: int
 */
int _isupper(int c);

/**
 * _isdigit - This checks for a digit (0 through 9)
 * @c: int
 * Return: int
 */
int _isdigit(int c);

/**
 * _strlen - returns length of a string
 * @s: string whose length is to be determined
 * Return: length of string
 */
int _strlen(char *s);

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to be printed
 */
void _puts(char *str);

/**
 * _strcpy - copying string pointed to by src to dest
 * @dest: destination
 * @src: source
 * Return: destination
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - converting string to an integer
 * @s: string
 * Return: int
 */
int _atoi(char *s);

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
 * _memset - a function that fills memory with a constant byte
 * @s: the memory area pointer
 * @b: the constant byte
 * @n: the number of bytes to fill the memory area
 * Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - a function that fills memory with a constant byte
 * @dest: the memory area pointer
 * @src: copies n bytes from memeory area
 * @n: the number of bytes to fill the memory area
 * Return: pointer to memory
 */
char *_memcpy(char *dest, char *src, unsigned int n);

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

#endif
