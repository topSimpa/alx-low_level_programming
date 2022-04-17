#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_c - print characters
*
*@chr: number of element to print
*Return: returns void
*/

void print_c(va_list chr)
{
char c;

c = va_arg(chr, int);
printf("%c", c);
}

/**
*print_i - print integers
*
*@in: number of element to print
*Return: returns void
*/

void print_i(va_list in)
{
int c;

c = va_arg(in, int);
printf("%d", c);
}

/**
*print_f - print characters
*
*@flt: number of element to print
*Return: returns void
*/

void print_f(va_list flt)
{
float c;

c = va_arg(flt, double);
printf("%f", c);
}

/**
*print_s - print characters
*
*@str: number of element to print
*Return: returns void
*/

void print_s(va_list str)
{
char *c;
char *s;

s = va_arg(str, char *);
c = null_char(s, s);
printf("%s", c);
}


/**
* print_all - prints all types passed
* @format: the format to print the argument pass
* Return: void
*/


void print_all(const char * const format, ...)
{
va_list all;
int i, j;
void (*f)(va_list);
print dict[] = {
{'c', print_c},
{'i', print_i},
{'f', print_f},
{'s', print_s}
};

va_start(all, format);
i = 0;
if (format != NULL)
{
while (format[i] != '\0')
{
	j = 0;
	while (j < 4)
	{
		if (format[i] == (dict[j].id))
		{
			f = (dict[j].p);
			f(all);
			switch (format[i + 1])
			{
				case '\0':
					break;
				default:
					printf(", ");
					break;
			}
		}
		j++;
	}
	i++;
}
}
putchar('\n');
va_end(all);
}
