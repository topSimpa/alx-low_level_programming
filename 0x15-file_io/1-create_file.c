#include "main.h"

/**
 * create_file - create a file of name filename
 * @filename: the file name
 * @text_content: what to write in file
 *
 * Return: returns the number of byte written in file
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename)
	{
		op = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (op != -1)
		{
			if (text_content)
			{
				wr = dprintf(op, "%s", text_content);
				if (wr < 0)
				{
					printf("wr fail");
					return (-1);
				}
			}
			return (1);
			close(op);
		}
		return (op);
	}
	return (-1);
}
