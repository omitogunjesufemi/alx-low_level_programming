# 0x10. C - Variadic functions
A project-based work on variadic functions in C-programming language.

## About
* What variadic functions are
* How to use `va_start`, `va_arg` and `va_end` macros
* Why and how to use the `const` type qualifier

## Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* Ubuntu 20.04 LTS
* `gcc` using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* The code uses the `Betty style`
* Global variables are not allowed
* No more than 5 functions per file
* The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden.
* For printing use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c).
* The prototypes of all functions and the prototype of the function `_putchar` should be included in the header file called `variadic_functions.h`.
* All header files should be include guarded

## File Description
*The project contains the following tasks:*

### 0-sum_them_all.c
*A function that returns the sum of all its parameters*
* Prototype: `int sum_them_all(const unsigned int n, ...);`
* If `n == 0`, return `0`.

### 1-print_numbers.c
*A function that prints numbers, followed by a new line.*
* Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
* where separator is the string to be printed between numbers
* and `n` is the number of integers passed to the function
* Use of `printf` is allowed
* If `separator` is `NULL`, don’t print it
* Print a new line at the end of your function

### 2-print_strings.c
*A function that prints strings, followed y a new line.*

* Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
* where `separator` is the string to be printed between the strings
* and `n` is the number of strings passed to the function
* You are allowed to use `printf`
* If `separator` is `NULL`, don’t print it
* If one of the string is `NULL`, print `nil` instead
* Print a new line at the end of your function

### 3-print_all.c
*A function that prints anything*

* Prototype: void print_all(const char * const format, ...);
* where format is a list of types of arguments passed to the function
** c: char
** i: integer
** f: float
** s: char * (if the string is NULL, print (nil) instead
* any other char should be ignored
* You are not allowed to use for, goto, ternary operator, else, do ... while
* You can use a maximum of
** 2 while loops
** 2 if
* You can declare a maximum of 9 variables
* You are allowed to use printf
* Print a new line at the end of your function