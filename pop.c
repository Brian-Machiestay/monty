#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: the stack
 * @opcode: the opcode
 * @line: the line number
 * @stream: the monty file stream
 * Return: the pop'd value
 */
int pop(stack_t **stack, char *opcode, int line, FILE *stream)
{
	stack_t *myh = *stack;
	int n;

	if (*stack == NULL)
	{
		free(opcode);
		free_stackt(*stack);
		fclose(stream);
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}
	n = myh->n;
	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(myh);
	return (n);
}
