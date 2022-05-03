#include <stdio.h>

/**
* main - Printing out the first 50 term of a fibonnaci sequence
* starting  from 1 and 2
* Return: int  0 (sucess)
*/

int main(void)
{
long unsigned int b = 0, r = 0;
long unsigned int f = 1;
long unsigned int s = 1, n;
int i = 0;

while (i < 98)
{
	if (i == 0)
	{
		putchar('1');
	}
	else

	{
		b = (s + f) / 1000;
		r = (s + f) % 1000;
		printf("%lu%lu", b, r);

		f = s;
		s = n;
	}
	if (i != 97)
	{
		putchar(',');
		putchar(' ');
	}
	i++;
}
putchar('\n');
return (0);
}


