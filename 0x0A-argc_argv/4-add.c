#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Entry point
* @argc: the count of argument
* @argv: pointer to an array of strings passed as command line arg
* Return: 0 int (sucess)
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int  i;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (rn != argv[i])
			{
				printf("%s\n", "Error");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	}
	return (0);
}
