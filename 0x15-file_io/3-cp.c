#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - copy's the content of one file to another
 * @ac: the count of command line arguement
 * @av: pointer to command line argument
 *
 * Return: return 0 (sucess)
 */


int main(int ac, char **av)
{
	char reads[1025];
	int rd, op1, op2, wr, cl1, cl2;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	op1 = open(av[1], O_RDONLY);
	rd = read(op1, reads, 1024);
	if (op1 == -1 || rd == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	reads[rd] = '\0';
	cl1 = close(op1);
	if (cl1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", cl1);
	}
	op2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	wr = write(op2, reads, rd);
	if (op2 == -1 || wr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	cl2 = close(op2);
	if (cl2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", cl2);
	}
	return (0);
}
