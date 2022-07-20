#include "monty.h"

/**
 * execute_opcode - check the code
 * @stack: the stack
 * @opcode: the opcode
 * @line: the line no.
 * @stream: the monty file stream
 * Return: the opcode or null
 */
char *execute_opcode(stack_t **stack, char **opcode, int line, FILE *stream)
{
	char *newprog[2];
	char *sep_ret;

	arrayinit(newprog, 2);
	sep_ret = strseperate(newprog, opcode);
	if (sep_ret == NULL)
		return (NULL);
	if (strcmp(newprog[0], "push") == 0)
		push(stack, newprog[1], *opcode, line, stream);
	else if (strcmp(newprog[0], "pall") == 0)
		pall(*stack);
	else if (strcmp(newprog[0], "pint") == 0)
		pint(*stack, *opcode, line, stream);
	else if (strcmp(newprog[0], "pop") == 0)
		pop(stack, *opcode, line, stream);
	else
		unknown_inst_exit(stack, *opcode, line, stream);
	return (*opcode);
}
