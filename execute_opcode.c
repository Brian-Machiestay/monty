#include "monty.h"

/**
 * execute_opcode - check the code
 * @stack: the stack
 * @opcode: the opcode
 * @line: the line no.
 * Return: the opcode or null
 */
char *execute_opcode(stack_t **stack, char *opcode, int line)
{
	char *newprog[2];
	char *sep_ret;

	arrayinit(newprog, 2);
	sep_ret = strseperate(newprog, opcode);
	if (sep_ret == NULL)
	{
		return (NULL);
	}
	if (strcmp(newprog[0], "push") == 0)
		push(stack, newprog[1], line);
	else if (strcmp(newprog[0], "pall") == 0)
		pall(*stack);
	else
	{
		fprintf(stderr, "%d: unknown instruction %s\n", line, opcode);
		exit(EXIT_FAILURE);
	}
	return (opcode);
}
