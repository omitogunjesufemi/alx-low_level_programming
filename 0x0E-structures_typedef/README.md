# 0x0E. C - Structures, typedef

> This project helped explain Structures (`struct`) in C language and typedef and how to utilize them.

## Tasks and Description
TASK | DESCRIPTION
--- | ---
`dog.h` | A header file with the `struct dog` containing the `XSname`, `age` and `owner` elements.
`1-init_dog.c` | A function that initialize a variable of type `struct dog`. Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
`2-print_dog.c` | A function that prints a  `struct dog`
`dog.h` | Defining a new type `dog_t` as a new name for the type `struct dog`.
`4-new_dog.c` | A function that creates a new dog. Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
`5-free_dog.c` | A function that frees dogs. Prototype: `void free_dog(dog_t *d);`