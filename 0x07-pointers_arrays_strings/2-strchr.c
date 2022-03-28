#include "main.h"

/**
*_strchr - find the first occurence of a char
*@s: the destination string
*@c: char to check for
*Return: return dest string pointer
*/

char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return (s + i);
}
