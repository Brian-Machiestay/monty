#include "monty.h"

/**
 * main - check the code
 * @ac: the the no. of args
 * @av: the args
 * Return: always zero
 */
int main(int ac, char **av)
{
	FILE *stream = NULL;
	stack_t *stack = NULL;

	checkerror(ac);
	stream = openMonty(av[1]);
	read_monty_lines(stream, &stack);
	fclose(stream);
	free_stackt(stack);
	return (0);
}
