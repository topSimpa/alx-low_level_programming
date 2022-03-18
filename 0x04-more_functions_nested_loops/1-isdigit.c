#include <stdio.h>
#include "main.h"

/**
* _isdigit - To check if digit
* @c: c is the character to check for value
* Return: int (Sucess)
*/


int _isdigit(int c)
{

if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);

}
}
