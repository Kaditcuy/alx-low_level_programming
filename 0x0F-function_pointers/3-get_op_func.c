#include <stdio.h>
#include "3-calc.h"

/**
* get_op_func - Function to select corrct fn to perform asked by the user
* @s: Operator passed as argument
*
* Return: A pointer to the function that its operator specifies
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
		if (s[0] == ops[i].op[0])
			return (ops[i].f);

	return (NULL);
}