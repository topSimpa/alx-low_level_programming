#include "main.h"

/**
*_memcpy - copys what in some part of a string memory into another
*@dest: the destination string
*@src: the source string
*@n: the number of bit to copy
*Return: return dest string pointer
*/



char  *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
