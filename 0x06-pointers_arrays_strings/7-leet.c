#include "main.h"

/**
* leet - encode string in 1337
* @s: string to encode
* Return: char pointer to the input formatted string (sucess)
*/

char *leet(char *s)
{
int i = 0;
while (s[i] != 0)
{
if (s[i] == 65 || s[i] == 97)
{
s[i] = '4';
}
else if (s[i] == 69 || s[i] == 101)
{
s[i] = '3';
}
else if (s[i] == 79 || s[i] == 111)
{
s[i] = '0';
}
else if (s[i] == 84 || s[i] == 116)
{
s[i] = '7';
}
else if (s[i] == 76 || s[i] == 108)
{
s[i] = '1';
}
i++;
}
return (s);
}


