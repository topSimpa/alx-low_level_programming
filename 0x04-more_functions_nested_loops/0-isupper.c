#include <stdio.h>
#include "main.h"

/**
* _isupper - To check if lower case
* @c: c is the character to check for case
* Return: int (Sucess)
*/


int _isupper(int c)
{

if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);

}
}
