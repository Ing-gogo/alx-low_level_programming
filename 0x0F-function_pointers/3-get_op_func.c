#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects correct function to perform operation asked by user
 * @s: operator passed as argument
 * Return: pointer to function
 */
int(*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int a = 0;

	if (ops[a].op != NULL && *(ops[a].op) != *s)
		{
			a++;
		}
	return (ops[a].f);
}

