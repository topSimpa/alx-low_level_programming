#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_numbers - sum all the variables together
* @n: the number of optional argument user want
* @separator: the character or string to use for seperation
*
* Description: uses variadic function and uses a const
* Return: integer sum (0 or not)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list op_arg;
unsigned int i = 1;

if (n)
{
	va_start(op_arg, n);
	while (i <= n)
	{
		if (separator)
		{
			if (i != n)
			{
				printf("%d%s", va_arg(op_arg, int), separator);
			}
			else
			{
				printf("%d", va_arg(op_arg, int));
			}
		}
		else
		{
			printf("%d", va_arg(op_arg, int));
		}
		i++;
	}
	putchar('\n');
	va_end(op_arg);

}
va_end(op_arg);
}

