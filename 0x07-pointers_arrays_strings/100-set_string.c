#include "main.h"
#include <stdio.h>

/**
 * set_string - this set a pointer to another pointer value
 * @s: string to change
 * @to: value to change to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
