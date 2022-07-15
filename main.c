#include "monty.h"

/**
 * main - check the code
 * @ac: the the no. of args
 * @av: the args
 * Return: always zero
 */
int main(int ac, char **av)
{
	int monty_des;
	FILE *stream;
	stack_t *stack = NULL;

	checkerror(ac);
	monty_des = openMonty(av[1]);
	stream = fdopen(monty_des, "r");
	read_monty_lines(stream, stack);
	close(monty_des);
	if (stack != NULL)
		free_stackt(stack);
	return (0);
}
