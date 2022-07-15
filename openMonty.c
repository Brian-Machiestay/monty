#include "monty.h"

/**
 * openMonty - check the code
 * @file: the file to open
 * Return: the descriptor for file
 */
int openMonty(char *file)
{
	int monty_des = 0;
	char *errmsg = "Error: Can't open file ";

	monty_des = open(file, O_RDONLY);
	if (monty_des == -1)
	{
		write(2, errmsg, strlen(errmsg));
		write(2, file, strlen(file));
		write(2, "\n", 1);
		exit(EXIT_FAILURE);
	}
	return (monty_des);
}
