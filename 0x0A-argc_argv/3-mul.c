#include "main.h"
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
	int sum;

	if (argc == 3)
	{
	sum = atoi(argv[1]) * atoi(argv[2]);
	{
	printf("%d\n", sum);
	}
	}
	else
	{
	printf("%s\n", "Error");
	return (-1);
	}
	return (0);
}
