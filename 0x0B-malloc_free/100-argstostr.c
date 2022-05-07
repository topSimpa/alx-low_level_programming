#include <stdio.h>
#include <stdlib.h>

/**
 * arg_tlen - calculates total length of arguements
 * @ac: number of argument
 * @av: the argument list
 *
 * Return: the length in int
 */

int arg_tlen(int ac, char **av)
{
	int t_len = 0;
	char *arg;

	for (; ac > 0; ac--)
	{
		arg = av[ac - 1];
		for(; *arg != '\0'; arg++)
		{
			t_len++;
		}
		t_len++;
	}
	return (t_len);
}


/**
 * argstostr - concatenate all together
 * @ac: count of all arguments
 * @av: the arguments array
 *
 * Return: returns a string
 */


char *argstostr(int ac, char **av)
{
	int arg_index, new_index;
	char *argstr, *cur_av;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}

	argstr = malloc(arg_tlen(ac, av));
	if (argstr == NULL)
	{
		free(argstr);
		return (NULL);
	}

	arg_index = 0, new_index = 0;
	for (; arg_index < ac; arg_index++)
	{
		cur_av = av[arg_index];
		for (; *cur_av != '\0'; cur_av++)
		{
			argstr[new_index] = *cur_av;
			new_index++;
		}
		argstr[new_index] = '\n';
		new_index++;
	}
	return (argstr);
}



