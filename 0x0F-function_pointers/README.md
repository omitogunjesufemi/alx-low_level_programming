# 0x0F. C - Function pointers
A project-based work on function pointers in C-programming language.

## About
* What function pointers are and how to use them.
* The contents held by a function pointer.
* Where the functio pointer points to in the virtual memory.

## Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* Ubuntu 20.04 LTS
* `gcc` using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* The code uses the `Betty style`
* Global variables are not allowed
* No more than 5 functions per file
* The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden.
* For printing use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c).
* The prototypes of all functions and the prototype of the function `_putchar` should be included in the header file called `function_pointers.h`.
* All header files should be include guarded

## File Description
*The project contains the following tasks:*

### 0-print_name.c
*A function that prints a name.*
* Prototype: `void print_name(char *name, void (*f)(char *));`

### 1-array_iterator.c
*A function that executes a function given as a parameter on each element of an array.*
* Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
* where `size` is the size of the array
* and `action` is a pointer to the function you need to use.