#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_strings - prints all strings passed
* @n: the number of optional arguments
* @separator: what to use to separate two printed strings
* Return: void
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 1;
va_list op_arg;
char *s;

va_start(op_arg, n);
if (n)
{
	while (i <= n)
	{
		s = (va_arg(op_arg, char *));
		if (i != n && s && separator)
		{
			printf("%s%s", s, separator);
		}
		else if ((i == n && s) || separator == NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		i++;
	}
}
va_end(op_arg);
putchar('\n');
}
