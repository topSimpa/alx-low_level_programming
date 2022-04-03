#include <stdio.h>
#include "main.h"

/**
* alignment - aligning digit
* @p: the number to print
* Return: void (sucess)
*/

void alignment(int p)
{
	if (p >= 10 && p < 100)
	{
		putchar(' ');
	}
	else if (p < 10)
	{
		putchar(' ');
		putchar(' ');
	}

}

/**
* write_num - to write out number
* @i: number to print
* Return: void (Sucess)
*/

void write_num(int i)
{
	if (i > 9 && i < 100)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
	}
	else if (i > 99)
	{
		putchar(i / 100 + '0');
		putchar((i / 10) % 10 + '0');
		putchar(i % 10 + '0');
	}
	else
	{
		putchar(i + '0');
	}
}


/**
* print_times_table - Used to Print 9-times table
* @n: tne times table to print
* Return: Void (Sucess)
*/


void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int r = 0;

		while (r <= n)
		{
			int e = 0;

			while (e <= n)
			{
				int p = e * r;

				if (e != 0)
				{
					alignment(p);
					write_num(p);
				}
				else
				{
					write_num(p);
				}

				if (e < n)
				{
					putchar(',');
					putchar(' ');
				}
				e++;
			}
			putchar(10);
			r++;
		}
	}
}




