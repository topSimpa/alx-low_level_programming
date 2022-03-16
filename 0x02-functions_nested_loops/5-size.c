#include <stdio.h>
#include "main.h"

/**
* print_sign - To check  sign of number
* @n: n is the character to check for sign
* Return: int (Sucess)
*/


int print_sign(int n)
{

if (n  == 0)
{
return (0);
putchar(48);
}
else if (n > 0)
{
return (1);
putchar(43);
else
{
return (-1);
putchar(45);

}
}
