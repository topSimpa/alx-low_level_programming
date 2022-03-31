#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: pointer to the string
* Return: int is return (sucess)
*/


int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
else
{
return (0);
}
}
