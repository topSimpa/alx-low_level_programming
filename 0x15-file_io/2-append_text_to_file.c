#include "main.h"

/**
 * append_text_to_file - create a file of name filename
 * @filename: the file name
 * @text_content: what to write in file
 *
 * Return: returns the number of byte written in file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename)
	{
		op = open(filename, O_APPEND | O_WRONLY);
		if (op != -1)
		{
			if (text_content)
			{
				wr = dprintf(op, "%s", text_content);
				if (wr < 0)
				{
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
