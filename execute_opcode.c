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
	else if (strcmp(newprog[0], "swap") == 0)
		swap(stack, *opcode, line, stream);
	else if (strcmp(newprog[0], "nop") == 0)
		return ("good");
	else if (strcmp(newprog[0], "add") == 0)
		add(stack, *opcode, line, stream);
	else if (strcmp(newprog[0], "sub") == 0)
		sub(stack, *opcode, line, stream);
	else if (strcmp(newprog[0], "div") == 0)
		divide(stack, *opcode, line, stream);
	else if (strcmp(newprog[0], "mul") == 0)
		multiply(stack, *opcode, line, stream);
	else if (strcmp(newprog[0], "mod") == 0)
		modulo(stack, *opcode, line, stream);
	else if (**newprog == '#')
		return ("good");
	else
		unknown_inst_exit(stack, *opcode, line, stream);
	return (*opcode);
}
