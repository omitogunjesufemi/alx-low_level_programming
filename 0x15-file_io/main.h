#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: the text file to read from
 * @letters: count of characters to print
 * Return: numbers of characters written to stdout
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - It creates a file
 * @filename: name of the file to be created
 * @text_content: a null terminated string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: the null terminated string to add at the end of the
 * file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content);

#endif
