#ifndef _CALC_H_

#define _CALC_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - adds a and b
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b);

/**
 * op_sub - subtract a and b
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b);

/**
 * op_mul - multiplies a and b
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b);

/**
 * op_div - divides a and b
 * @a: first integer
 * @b: second integer
 * Return: division of a and b
 */
int op_div(int a, int b);

/**
 * op_mod - modulus of a and b
 * @a: first integer
 * @b: second integer
 * Return: remainder of the division of a and b
 */
int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif
