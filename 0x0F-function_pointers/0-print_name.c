#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
*print_name - print a name using a function called
*@f: function pointer to style to print
*@name: pointer to string to name to print
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
	f(name);
}
}
