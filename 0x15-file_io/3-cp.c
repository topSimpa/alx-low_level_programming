#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include  "main.h"

/**
 *close_error - closes all open files
 *@fd: file descriptor
 *
 *Return: void
 */

void close_error(int fd)
{

	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}


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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}

	op1 = open(av[1], O_RDONLY);
	if (op1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);


	op2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (op2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);


	while ((rd = read(op1, reads, 1024)) > 0)
	{
		reads[rd] = '\0';

		wr = write(op2, reads, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}

	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);


	cl1 = close(op1);
	if (cl1 == -1)
		close_error(op1);
	cl2 = close(op2);
	if (cl2 == -1)
		close_error(op2);
	return (0);
}
