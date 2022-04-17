#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stddef.h>


void _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

/**
* struct print_any - structure of prints statement
*
* @id: identifier of type
* @p: pointer to a print function
*/

typedef struct print_any
{
	char id;
	void (*p)(va_list);
} print;

#define null_char(e, r) ((NULL) == (e) ? "(nil)" : (r))

void print_c(va_list chr);
void print_c(va_list in);
void print_c(va_list flt);
void print_c(va_list str);
void print_all(const char * const format, ...);

#endif /* variadic_functions.h */
