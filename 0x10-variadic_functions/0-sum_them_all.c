#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* sum_them_all - sum all the variables together
* @n: the number of optional argument user want
*
* Description: uses variadic function and uses a const
* Return: integer sum (0 or not)
*/

int sum_them_all(const unsigned int n, ...)
{

va_list op_arg;
unsigned int i = 1;
int sum = 0;

if (n)
{
	va_start(op_arg, n);
	while (i <= n)
	{
		sum += va_arg(op_arg, int);
		i++;
	}
	va_end(op_arg);
	return (sum);
}

va_end(op_arg);
return (0);
}

