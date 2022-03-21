#include "main.h"
#include <stdio.h>

/**
* _strlen - change all input to 98
* @s: s is the pointer to an array of char (string)
* Return: int return length of string (success)
*/

int _strlen(char *s)
{
int i=0;
while(1)
{
if (s[i] == '\0')
{
break;
}
i++;
}
return (i);
}

