#include <stdio.h>

/**
* main - Printing out the first 50 term of a fibonnaci sequence
* starting  from 1 and 2
* Return: int  0 (sucess)
*/

int main (void)
{
long int f = 1;
long int s = 1;
int i = 0;

while (i < 50)
{
	if (i == 0)
	{
		putchar('1');
	}
	else
	{
		long int n = s + f;
		printf("%ld", n);
		f = s;
		s = n;
	}
	if (i != 49)
	{
		putchar(',');
		putchar(' ');
	}
	i++;
}
putchar('\n');
return (0);
}


