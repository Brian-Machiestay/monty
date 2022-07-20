#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: the stack
 * @opcode: the opcode
 * @line: the line number
 * @stream: the monty file stream
 */
void swap(stack_t **stack, char *opcode, int line, FILE *stream)
{
	int topn;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		free_stackt(*stack);
		free(opcode);
		fclose(stream);
		fprintf(stderr, "L%d: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	topn = (*stack)->n;
	(*stack)->n = ((*stack)->next)->n;
	((*stack)->next)->n = topn;
}
