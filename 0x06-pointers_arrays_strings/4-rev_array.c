#include "main.h"
#include <stdio.h>

/**
* reverse_array - return a string in reverse
* @a: a is the int array pointer (string)
* @n: n is the length of the int array
* Return: void (success)
*/

void reverse_array(int *a, int n)
{
int l = n;
int j = l - 1;
int h = l / 2;
int i = 0;
while (i < h)
{
char r = a[i];
a[i] = a[j - i];
a[j - i] = r;
i++;
}
}
