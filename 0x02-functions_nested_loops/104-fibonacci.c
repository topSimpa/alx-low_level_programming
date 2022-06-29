#include <stdio.h>

/**
* main - Printing out the first 50 term of a fibonnaci sequence
* starting  from 1 and 2
* Return: int  0 (sucess)
*/

int main(void)
{
unsigned long int b = 0, r = 0, c, d, s = 1, n, f = 1, i = 0;

while (i < 98)
{
	n = f + s;
	if (i == 0)
		putchar('1');
	else if (i < 92)
	{
		if (i == 91)
			b = (s + f) / 1000, r = (s + f) % 1000;
		printf("%lu", n);
		f = s, s = n;
	}
	else if (i == 92)
	{
		c = b, d = r;
		b += (f / 1000) + (r + (f % 1000)) / 1000, r = (r + (f % 1000)) % 1000;
		printf("%lu%lu", b, r);
	}
	else
	{
		f = b, s = r;
		b += c + (r + d) / 1000, printf("%lu", b);
		if (r + d >= 1000)
		putchar('0');
		r = (r + d) % 1000, printf("%lu", r);
		c = f, d = s;
	}
	if (i != 97)
		putchar(','), putchar(' ');
	i++;
}
putchar('\n');
return (0);
}
