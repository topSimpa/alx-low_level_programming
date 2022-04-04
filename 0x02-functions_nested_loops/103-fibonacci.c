#include <stdio.h>

/**
* main - Printing out the first 50 term of a fibonnaci sequence
* starting  from 1 and 2
* Return: int  0 (sucess)
*/

int main(void)
{
long int f = 1;
long int s = 1;
long int n = 0;
long int sum = 0;
int i = 0;

while (n <= 4000000)
{
	if (i > 0)
	{
		n = s + f;
		if (n % 2 == 0)
		{
			sum += n;
		}
		f = s;
		s = n;
	}
	i++;
}
printf("%ld", sum);
putchar('\n');
return (0);
}


