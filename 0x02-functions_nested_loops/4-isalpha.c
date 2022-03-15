#include <stdio.h>
#include "main.h"

/**
* _isalpha - To check if it is a letter
* @c: c is the character to check for case
* Return: int (Sucess)
*/


int _isalpha(int c)
{

if ((c > 97 && c < 123) || (c > 65 && c < 90))
{
return (1);
}
else
{
return (0);

}
}
