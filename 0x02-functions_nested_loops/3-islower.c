#include <stdio.h>
#include "main.h"

/**
* _islower - To check if lower case
* @c: c is the character to check for case
* Return: int (Sucess)
*/


int _islower(int c)
{

if (c > 97 && c < 123)
{
return (1);
}
else
{
return (0);

}
}
