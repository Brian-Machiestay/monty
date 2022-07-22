#include "monty.h"

/**
 * multiply - multiplies the two top elements of the stack
 * @stack: the stack
 * @opcode: the opcode
 * @line: the line number
 * @stream: the monty file stream
 */
void multiply(stack_t **stack, char *opcode, int line, FILE *stream)
{
	int n1;
	int n2;
	char textnum[20];
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		free(opcode);
		free_stackt(*stack);
		fclose(stream);
		fprintf(stderr, "L%d: can't mul, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	n1 = pop(stack, opcode, line, stream);
	n2 = pop(stack, opcode, line, stream);
	result = n1 * n2;
	sprintf(textnum, "%d", result);
	push(stack, textnum, opcode, line, stream);
}
