#include <stdio.h>

/**
*main - entry point
*print out the sum of multiple of 3 or 5 below 1024
*Return: 0 (sucess)
*/

int main(void)
{
	int i = 2;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
