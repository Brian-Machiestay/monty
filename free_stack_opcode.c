#include "monty.h"

/**
 * free_stack_opcode - check the code
 * @stack: the stack
 * @opcode: the opcode
 * @line: the line number
 * @str: the monty file stream
 */
void free_stack_opcode(stack_t **stack, char *opcode, int line, FILE *str)
{
	fprintf(stderr, "L%d: usage: push integer\n", line);
	free_stackt(*stack);
	free(opcode);
	fclose(str);
	exit(EXIT_FAILURE);
}
