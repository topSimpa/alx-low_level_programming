#include "main.h"

/**
* _memset - A function that replace a memory space by a particular entry
* @s: the array pointer
* @b: what to put in the memory space
* @n: the number of the first n terms to replace
* Return: pointer to the string s
*/


char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
