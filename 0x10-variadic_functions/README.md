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