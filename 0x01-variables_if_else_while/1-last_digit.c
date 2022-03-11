#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
*main - Entry point
*Print out the last-digit of the random generated number
*Return: Always 0 (Success)
*/

int main(void)
{
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;

if (last_digit == 0)
{
printf("the last digit of n is %d and is 0\n", last_digit);
}
else if (last_digit < 6)
{
printf("the last digit of n is %d and is less than 6 and not 0\n", last_digit);
}
else
{
printf("the last digit of n is %d and is greater than 5\n", last_digit);
}
return (0);
}
