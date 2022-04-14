#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*@argv: command line argument
*@argc: count of command line argument
*Return: return 0 (sucess)
*/

int main(int argc, char *argv[])
{
int (*f)(int, int);
int r;

if (argc != 4)
{
	printf("yError\n");
	exit(98);
}
if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '%' && argv[2][0] != '/')
{
	printf("Error\n");
	exit(99);
}
else if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
{
	printf("Error\n");
	exit(100);
}
f = get_op_func(argv[2]);
r = f(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", r);
return (0);
}
