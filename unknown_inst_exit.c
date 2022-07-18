#include "monty.h"

/**
 * unknown_inst_exit - check the code
 * @opcode: the opcode
 * @line: the line
 * @stack: the stack
 * @str: the monty file stream
 */
void unknown_inst_exit(stack_t **stack, char *opcode, int line, FILE *str)
{
	free(*stack);
	fprintf(stderr, "L%d: unknown instruction %s\n", line, opcode);
	free(opcode);
	fclose(str);
	exit(EXIT_FAILURE);
}
