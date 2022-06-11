#include <stdio.h>
#include "main.h"

/**
 * get_endianness
 *
 * Return: returns and int 1 indicate little 0 for big
 */

int get_endianness(void)
{
   unsigned int i = 1;
   char *c = (char *)&i;
   if (*c)
       return (1);
   else
       return (0);
}
