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
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
