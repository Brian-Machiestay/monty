#include "monty.h"

/**
 * checkerror - prints an error on error
 * @ac: the no. of args
 */
void checkerror(int ac)
{
	char *errmsg = "USAGE: monty file\n";

	if (ac != 2)
	{
		write(2, errmsg, strlen(errmsg));
		exit(EXIT_FAILURE);
	}
}
