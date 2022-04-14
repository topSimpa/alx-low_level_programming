#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*get_op_func - get the appropriate function to use
*@s: the sign of operator
*Return: an apropriate pointer to a function
*/


int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL}};
int i = 0;

while (i < 6)
{
	if (s[0] == *((ops[i]).op))
	{
		return ((ops[i]).f);
	}
	i++;
}
return (NULL);
}
