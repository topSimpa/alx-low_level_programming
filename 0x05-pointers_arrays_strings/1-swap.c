#include "main.h"

/**
* swap_int - change all input to 98
* @a: a is the pointer to the first interger type
* @b: b is the pointer to the second interger type
* Return : void
*/

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
