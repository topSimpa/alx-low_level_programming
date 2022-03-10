#include <stdio.h>
#include <string.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
int y, x, z, r, p;
y = sizeof(char);
x = sizeof(int);
z = sizeof(long int);
r = sizeof(long long int);
p = sizeof(float);

printf("Size of a char: %d byte(s)\n", y);
printf("Size of an int: %d byte(s)\n", x);
printf("Size of a long int: %d byte(s)\n", z);
printf("Size of a long long int: %d byte(s)\n", r);
printf("Size of a float: %d byte(s)\n", p);
return (0);
}
