#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcode of it main function
 * @ac: the count of the argument
 * @av: the argument array
 *
 * Return: 0 Always
 */

int main(int ac, char **av)
{
	int (*address)(int, char **) = main;
	int bytes, count = 0;
	unsigned char code;


	if (ac != 2)
	{
		printf("Error");
		exit(1);
	}

	bytes = atoi(av[1]);

	if (bytes < 0)
	{
		printf("Error");
		exit(2);
	}

	while (count < bytes)
	{
		code = *((unsigned char *)address);
		printf("%.2x", code);

		if (count != bytes - 1)
			printf(" ");
		address++;
		count++;
	}
	printf("\n");

	return (0);
}
