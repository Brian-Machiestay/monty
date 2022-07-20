#include "monty.h"

/**
 * pint - prints the top value on the stack
 * @stack:  the stack
 * @opcode: the opcode
 * @line: the line
 * @stream: the monty file stream
 */
void pint(stack_t *stack, char *opcode, int line, FILE *stream)
{
	if (stack == NULL)
	{
		free_stackt(stack);
		free(opcode);
		fclose(stream);
		fprintf(stderr, "L%d: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", stack->n);
}
